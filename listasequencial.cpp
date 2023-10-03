#include "listasequencial.h"


listaSequencial::listaSequencial(QWidget *parent)
    : QFrame(parent)
{
    nArrays = 0;
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
    clearBoard();
   novoArray();


}

void listaSequencial::novoArray(){
    QPainter painter(this);
    QRect rect = contentsRect();
    int boardTop = rect.bottom() - BoardHeight*squareHeight();


    int i = 1;


    for (int j = 0; j < BoardWidth; ++j) {
        ElementoShape shape = shapeAt(j, 1);
        if (shape == NoShape)
            drawSquare(painter, rect.left() + j * squareWidth(), boardTop + i * squareHeight(), shape);
    }



    // Force o redesenho do tabuleiro
    update();

}


void listaSequencial::setElementoPesquisado(QLabel *label)
{
    elementoPesquisadoLabel = label;
}


QSize listaSequencial::sizeHint() const
{
    return QSize(BoardWidth * 15 + frameWidth() * 2,
                 BoardHeight * 15 + frameWidth() * 2);
}

QSize listaSequencial::minimumSizeHint() const
{
    return QSize(BoardWidth * 5 + frameWidth() * 2,
                 BoardHeight * 5 + frameWidth() * 2);
}

void listaSequencial::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

    QPainter painter(this);
    QRect rect = contentsRect();
    int boardTop = rect.bottom() - BoardHeight*squareHeight();




    for (int i = 0; i < BoardHeight; ++i) {
        for (int j = 0; j < BoardWidth; ++j) {
            ElementoShape shape = shapeAt(j, BoardHeight - i - 1);
            if (shape == NoShape)
                drawSquare(painter, rect.left() + j * squareWidth(), boardTop + i * squareHeight(), shape);
        }
    }


    // Force o redesenho do tabuleiro
    update();
}


void listaSequencial::drawSquare(QPainter &painter, int x, int y, ElementoShape shape)
{
    static constexpr QRgb colorTable[1] = {
        0xCC6666
    };

    QColor color = colorTable[int(shape)];
    painter.fillRect(x + 1, y + 1, squareWidth() - 2, squareHeight() - 2, color);




    painter.setPen(Qt::white);  // Cor da fonte
  //  painter.drawText(x + 5, y + squareHeight() - 5, QString::number(55));
}

void listaSequencial::add(){

}
void listaSequencial::pesquisa(){

}



void listaSequencial::clearBoard()
{
    for (int i = 0; i < BoardWidth * BoardHeight; ++i)
        board[i] = NoShape;
}

/** Verifica se a Lista está vazia */
bool listaSequencial::vazia(){
    if (nElementos == 0)
        return true;
    else
        return false;

}


/**Verifica se a Lista está cheia */
bool listaSequencial::cheia(){
    if (nElementos == 100)
        return true;
    else
        return false;
}

/**Obtém o tamanho da Lista*/
int listaSequencial::tamanho(){
    return nElementos;
}

/** Obtém o i-ésimo elemento de uma lista.
    Retorna -1 se a posição for inválida. */
int listaSequencial::elemento(int pos){

    /* Se posição estiver fora dos limites <= 0 ou > tamanho da lista */
    if ((pos > nElementos) || (pos <= 0))
        return -1;

    return valoresTabuleiro[pos-1];
}

/**	Retorna a posição de um elemento pesquisado.
        Retorna -1 caso não seja encontrado */
int listaSequencial::posicao (int valor){
    /* Procura elemento a elemento, se o dado está na
        lista. Se estiver, retorna a sua posição no array+1 */
for (int i = 0; i < nElementos; i++){
    if (valoresTabuleiro[i] == valor){
        return (i + 1);
    }
}
return -1;
}

/**	Retorna a posição de um elemento pesquisado.
    Retorna -1 caso não seja encontrado */
int listaSequencial::posicao (int valor, int desloc){
        /* Procura elemento a elemento, se o dado está na
        lista. Se estiver, retorna a sua posição no array+1 */
for (int i = desloc; i < nElementos; i++){
    if (valoresTabuleiro[i] == valor){
        return (i + 1);
    }
}
return -1;
}

/**Insere um elemento em uma determinada posição
            Retorna false se a lista estiver cheia ou
            a posição for inválida. Caso contrário retorna true */
bool listaSequencial::insere (int pos, int valor){

    /* Verifica se a lista está cheia ou se a posicao a ser
     * inserida eh invalida (i.e., > tamanho da lista+1*/
    if (cheia() || (pos > nElementos+1) || (pos <=0)){
        return false;
    }

    /* Desloca os elementos após pos, uma posicao a
    direita. Isso serve para abrir espaço para insercao
    do novo elemento */
    for (int i = nElementos; i >= pos; i--){
        valoresTabuleiro[i] = valoresTabuleiro[i-1];
    }

    /* Insere o dado na posicao correta */
    valoresTabuleiro[pos - 1] = valor;

    /* Incrementa o numero de elementos na lista */
    nElementos++;
    return true;
}

/**Remove um elemento de uma determinada posição
    Retorna o valor do elemento removido. -1 caso a remoção falhe  */
int listaSequencial::remove(int pos){
    /* Verifica se a posicao eh valida */
    if ((pos > nElementos) || (pos < 1 ))
        return -1;

    /* Armazena o dado a ser removido na var "dado" */
    int aux = valoresTabuleiro[pos-1];

    /* Desloca todos os elementos após 'pos', uma
    posicao a esquerda */
    for (int i = pos - 1; i < nElementos - 1; i++){
        valoresTabuleiro[i] = valoresTabuleiro[i+1];
    }

    /* Decrementa o numero de elementos na lista */
    nElementos--;
    return aux;
}


