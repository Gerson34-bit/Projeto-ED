/*
* C++ && Qt Tetris: main application
* Author: walid Abbassi [https://github.com/walidAbbassi]
* 2019
*
* Source code is licensed under MIT License
* (for more details see LICENSE)
*
*/
#include "precompiledHeader.h"
#include "janelalistasequencial.h"
#include "janelalistasequenciallogica.h"
#include "ui_janelamenulistas.h"


int main(int argc, char *argv[])
{
    QApplication applicationListas(argc, argv);
    janelaListaSequencial MenuListas;
    MenuListas.show();
    return applicationListas.exec();
}
