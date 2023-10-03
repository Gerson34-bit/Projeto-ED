#ifndef JANELALISTASEQUENCIALLOGICA_H
#define JANELALISTASEQUENCIALLOGICA_H
#include "listasequencial.h"
#include <QLineEdit>

class janelalistasequenciallogica : public QWidget
{
    Q_OBJECT

public:
    janelalistasequenciallogica(QWidget *parent = nullptr);

private:
    QLabel *createLabel(const QString &text);


    QLabel *boxElementoPesquisado;

    listaSequencial *board;
    QLCDNumber *nElementos;
    QLCDNumber *posElemento;
    QLCDNumber *valorElemento;
    QPushButton *addNewElement;
    QPushButton *removeElement;
    QPushButton *pesquisarVal;
    QPushButton *pesquisarPos;
    QLineEdit *valorInput;
    QLineEdit *pesquisaInput;




};


#endif // JANELALISTASEQUENCIALLOGICA_H
