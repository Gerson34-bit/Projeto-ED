#include "janelamenulistas.h"
#include "ui_janelamenulistas.h"

MenuListas::MenuListas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuListas)
{
    ui->setupUi(this);

    listaSequencial = new QPushButton(tr("&Lista Sequencial"));
    listaSequencial->setFocusPolicy(Qt::NoFocus);
    listaEncadeada = new QPushButton(tr("&Lista Encadeada"));
    listaEncadeada->setFocusPolicy(Qt::NoFocus);
    listaDuplamenteEncadeada = new QPushButton(tr("&Lista Duplamente Encadeada"));
    listaDuplamenteEncadeada->setFocusPolicy(Qt::NoFocus);

    connect(listaSequencial, &QPushButton::clicked, this, &MenuListas::openListaSequencial);

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(listaSequencial, 0, 0);
    layout->addWidget(listaEncadeada, 1, 0);
    layout->addWidget(listaDuplamenteEncadeada, 2, 0);

    setLayout(layout);




    setWindowTitle(tr("MENU"));
    resize(550, 770);

}

MenuListas::~MenuListas()
{
    delete ui;
}
