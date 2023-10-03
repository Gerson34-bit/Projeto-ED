#ifndef JANELALISTASEQUENCIAL_H
#define JANELALISTASEQUENCIAL_H

#include <QWidget>

namespace Ui {
class janelaListaSequencial;
}

class janelaListaSequencial : public QMainWindow
{
    Q_OBJECT

public:
    explicit janelaListaSequencial(QWidget *parent = nullptr);
    ~janelaListaSequencial();

private:
    Ui::janelaListaSequencial *ui;
};

#endif // JANELALISTASEQUENCIAL_H
