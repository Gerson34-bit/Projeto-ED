#ifndef JANELALISTAENCADEADA_H
#define JANELALISTAENCADEADA_H

#include <QWidget>

namespace Ui {
class ListaEncadeada;
}

class ListaEncadeada : public QWidget
{
    Q_OBJECT

public:
    explicit ListaEncadeada(QWidget *parent = nullptr);
    ~ListaEncadeada();

private:
    Ui::ListaEncadeada *ui;
};

#endif // JANELALISTAENCADEADA_H
