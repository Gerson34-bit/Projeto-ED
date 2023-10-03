#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include "elementolistasequencial.h"

#include <stdlib.h>

#include <QtCore>
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>
#include <QFrame>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QDial>
#include <QtMultimedia/QMediaPlayer>
#include <QIcon>
#include <QBasicTimer>
#include <QPointer>




class listaSequencial : public QFrame
{
    Q_OBJECT

public:
     listaSequencial(QWidget *parent = nullptr);

    void setElementoPesquisado(QLabel *label);

     QSize sizeHint() const override;
     QSize minimumSizeHint() const override;


//    void setElementoPesquisado(QLabel *label);

     void novoArray();



    bool vazia();
    bool cheia();
    int tamanho();
    int elemento(int pos);
    int posicao (int valor);
    int posicao (int valor, int desloc);
    bool insere (int pos, int valor);
    int remove(int pos);

public slots:
    void add();
    void pesquisa();

signals:
    void nElementosChanged(int nElementos);
    void posElementoChanged(int pos);
    void valorElementoChanged(int valor);


protected:
   void paintEvent(QPaintEvent *event) override;
private:
    enum { BoardWidth = 10, BoardHeight = 20 };

    ElementoShape &shapeAt(int x, int y) { return board[(y * BoardWidth) + x]; }

    void clearBoard();

    void drawSquare(QPainter &painter, int x, int y, ElementoShape shape);


    QPointer<QLabel> elementoPesquisadoLabel;


    elementolistasequencial elementoPesquisado;

    int nArrays;




    int squareWidth() { return contentsRect().width() / (BoardWidth); }
    int squareHeight() { return contentsRect().height() / (BoardHeight); }


    void drawSquare(QPainter &painter, int x, int y, int value);
    int x;
    int y;
    int index = y * BoardWidth + x;
    int valoresTabuleiro[100];
    int valor;
    int nElementos;

    ElementoShape board[BoardWidth * BoardHeight];



};

#endif // LISTASEQUENCIAL_H
