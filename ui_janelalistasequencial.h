#ifndef UI_JANELALISTASEQUENCIAL_H
#define UI_JANELALISTASEQUENCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class ui_janelaListaSequencial
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *janelaListaSequencial)
    {
        if (janelaListaSequencial->objectName().isEmpty())
            janelaListaSequencial->setObjectName(QStringLiteral("janelaListaSequencial"));
     //   janelaListaSequencial->resize(460, 460);
        centralWidget = new QWidget(janelaListaSequencial);
        centralWidget->setObjectName(QStringLiteral("janelaListaSequencial"));
        janelaListaSequencial->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(janelaListaSequencial);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        janelaListaSequencial->setMenuBar(menuBar);
        mainToolBar = new QToolBar(janelaListaSequencial);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        janelaListaSequencial->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(janelaListaSequencial);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        janelaListaSequencial->setStatusBar(statusBar);

        retranslateUi(janelaListaSequencial);

        QMetaObject::connectSlotsByName(janelaListaSequencial);
    } // setupUi

    void retranslateUi(QMainWindow *janelaListaSequencial)
    {
        janelaListaSequencial->setWindowTitle(QApplication::translate("janelaListaSequencial", "janelaListaSequencial", nullptr));
    } // retranslateUi

};

namespace Ui {
class janelaListaSequencial: public ui_janelaListaSequencial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALISTASEQUENCIAL_H

