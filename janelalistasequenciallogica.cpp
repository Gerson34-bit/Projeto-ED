#include "janelalistasequenciallogica.h"
#include "listasequencial.h"
#include <QLineEdit>





janelalistasequenciallogica::janelalistasequenciallogica(QWidget *parent)
    : QWidget(parent), board(new listaSequencial)
{

    //configuração inicial da janela do elemento pesquisado
    boxElementoPesquisado = new QLabel;
    boxElementoPesquisado->setFrameStyle(QFrame::Box | QFrame::Raised);
    boxElementoPesquisado->setAlignment(Qt::AlignCenter);
    board->setElementoPesquisado(boxElementoPesquisado);
    board->setStyleSheet("background-image: url(:/picture/background.jpg);");



    //configuração inicial dos paineis de dados

    nElementos = new QLCDNumber(1);
    nElementos->setSegmentStyle(QLCDNumber::Filled);

    posElemento = new QLCDNumber(2);
    posElemento->setSegmentStyle(QLCDNumber::Filled);

    valorElemento = new QLCDNumber(2);
    valorElemento->setSegmentStyle(QLCDNumber::Filled);


    valorInput = new QLineEdit(this);
    pesquisaInput = new QLineEdit(this);




    //configuração inicial dos botões

    addNewElement = new QPushButton(tr("&Adicionar Elemento"));
    addNewElement->setFocusPolicy(Qt::NoFocus);
    removeElement = new QPushButton(tr("&Remover Elemento"));
    removeElement->setFocusPolicy(Qt::NoFocus);
    pesquisarVal = new QPushButton(tr("&Pesquisa por Valor"));
    pesquisarVal->setFocusPolicy(Qt::NoFocus);
    pesquisarPos = new QPushButton(tr("&Pesquisa por Posição"));
    pesquisarPos->setFocusPolicy(Qt::NoFocus);



    //conexões dos botões e placas
    connect(addNewElement, &QPushButton::clicked, board, &listaSequencial::add);
    connect(removeElement , &QPushButton::clicked, board, &listaSequencial::remove);
    connect(pesquisarVal, &QPushButton::clicked, board, &listaSequencial::pesquisa);
    /*
    connect(board, &listaSequencial::nElementosChanged,
            nElementos, qOverload<int>(&QLCDNumber::display));
    connect(board, &listaSequencial::posElementoChanged,
            posElemento, qOverload<int>(&QLCDNumber::display));
    connect(board, &listaSequencial::valorElementoChanged,
            valorElemento, qOverload<int>(&QLCDNumber::display));


*/

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(pesquisaInput, 0, 0);
    layout->addWidget(pesquisarVal, 1, 0);
    layout->addWidget(pesquisarPos, 2, 0);
    layout->addWidget(createLabel(tr("Elemento Pesquisado")), 4, 0);
   layout->addWidget(boxElementoPesquisado, 5, 0);

layout->addWidget(valorInput, 0, 2);
    layout->addWidget(createLabel(tr("Posição do Elemento")), 4, 2);
    layout->addWidget(posElemento, 5, 2);
    layout->addWidget(addNewElement, 1, 2);
    layout->addWidget(board, 0, 1, 6, 1);
   // layout->addWidget(createLabel(tr("Número de Elementos")), 0, 2);
 //   layout->addWidget(nElementos, 1, 2);
    layout->addWidget(createLabel(tr("Valor do Elemento")), 2, 2);
    layout->addWidget(valorElemento, 3, 2);
  layout->addWidget(removeElement, 6, 0);


    setLayout(layout);




    setWindowTitle(tr("LISTA SEQUENCIAL"));
    resize(550, 360);
}

/*
*	create Label for NEXT/LEVEL/SCORE/LINES REMOVED
*	@name	: createLabel
*	@param	: QString
*	@return : QLabel
*/

QLabel *janelalistasequenciallogica::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
    return label;
}

