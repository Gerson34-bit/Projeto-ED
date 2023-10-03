#ifndef JANELAMENULISTAS_H
#define JANELAMENULISTAS_H

#include "janelalistasequenciallogica.h"
#include "listasequencial.h"
#include <QLineEdit>


#include <QWidget>

namespace Ui {
class MenuListas;
}

class MenuListas : public QWidget
{
    Q_OBJECT

public:
    explicit MenuListas(QWidget *parent = nullptr);
    ~MenuListas();

private:
    Ui::MenuListas *ui;
    QPushButton *listaSequencial;
    QPushButton *listaEncadeada;
    QPushButton *listaDuplamenteEncadeada;

    void openListaSequencial() {
        // Aqui você pode criar e exibir a janela da lista sequencial
        janelalistasequenciallogica *janela = new janelalistasequenciallogica;
        janela->show();
    }
};

#endif // JANELAMENULISTAS_H
