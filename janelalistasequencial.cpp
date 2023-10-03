#include "janelalistasequencial.h"
#include "ui_janelalistasequencial.h"
#include "janelamenulistas.h"
#include "ui_janelamenulistas.h"



#include "janelalistasequenciallogica.h"

#include <stdlib.h>
/* Add Qt includes here */
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



janelaListaSequencial::janelaListaSequencial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::janelaListaSequencial)
{
    ui->setupUi(this);

  //  janelalistasequenciallogica *window1 = new janelalistasequenciallogica;
    MenuListas *window2 = new MenuListas;
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(window2);
    setCentralWidget(new QWidget);
   centralWidget()->setLayout(layout);
  //  setFixedSize(700, 670);
    this->setWindowTitle("Listas");
  //  this->setWindowIcon(QIcon(":/picture/tetris.png"));
   // createMenuBar();
}




janelaListaSequencial::~janelaListaSequencial()
{
    delete ui;
}
