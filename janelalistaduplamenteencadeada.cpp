#include "janelalistaduplamenteencadeada.h"
#include "ui_janelalistaduplamenteencadeada.h"

ListaDuplamenteEncadeada::ListaDuplamenteEncadeada(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaDuplamenteEncadeada)
{
    ui->setupUi(this);
}

ListaDuplamenteEncadeada::~ListaDuplamenteEncadeada()
{
    delete ui;
}
