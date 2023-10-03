#include "janelalistaencadeada.h"
#include "ui_janelalistaencadeada.h"

ListaEncadeada::ListaEncadeada(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaEncadeada)
{
    ui->setupUi(this);
}

ListaEncadeada::~ListaEncadeada()
{
    delete ui;
}
