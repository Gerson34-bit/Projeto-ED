#ifndef JANELALISTADUPLAMENTEENCADEADA_H
#define JANELALISTADUPLAMENTEENCADEADA_H

#include <QWidget>

namespace Ui {
class ListaDuplamenteEncadeada;
}

class ListaDuplamenteEncadeada : public QWidget
{
    Q_OBJECT

public:
    explicit ListaDuplamenteEncadeada(QWidget *parent = nullptr);
    ~ListaDuplamenteEncadeada();

private:
    Ui::ListaDuplamenteEncadeada *ui;
};

#endif // JANELALISTADUPLAMENTEENCADEADA_H
