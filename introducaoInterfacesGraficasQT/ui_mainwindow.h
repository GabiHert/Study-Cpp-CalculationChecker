/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *confirmButton;
    QLabel *firstNum;
    QLabel *secNum;
    QLabel *op;
    QLabel *asw;
    QLabel *equals;
    QLineEdit *input;
    QPushButton *newOpButton;
    QRadioButton *sumSelect;
    QRadioButton *subSelected;
    QRadioButton *multiplicationSelected;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(522, 226);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(30, 110, 121, 61));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell"));
        font.setPointSize(16);
        confirmButton->setFont(font);
        firstNum = new QLabel(centralwidget);
        firstNum->setObjectName(QStringLiteral("firstNum"));
        firstNum->setGeometry(QRect(50, 40, 31, 51));
        QFont font1;
        font1.setPointSize(18);
        firstNum->setFont(font1);
        secNum = new QLabel(centralwidget);
        secNum->setObjectName(QStringLiteral("secNum"));
        secNum->setGeometry(QRect(160, 40, 31, 51));
        secNum->setFont(font1);
        op = new QLabel(centralwidget);
        op->setObjectName(QStringLiteral("op"));
        op->setGeometry(QRect(110, 50, 51, 41));
        op->setFont(font1);
        asw = new QLabel(centralwidget);
        asw->setObjectName(QStringLiteral("asw"));
        asw->setGeometry(QRect(320, 110, 231, 61));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        asw->setFont(font2);
        equals = new QLabel(centralwidget);
        equals->setObjectName(QStringLiteral("equals"));
        equals->setGeometry(QRect(210, 50, 21, 41));
        input = new QLineEdit(centralwidget);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(250, 49, 81, 31));
        input->setFont(font1);
        newOpButton = new QPushButton(centralwidget);
        newOpButton->setObjectName(QStringLiteral("newOpButton"));
        newOpButton->setGeometry(QRect(160, 110, 121, 61));
        newOpButton->setFont(font);
        sumSelect = new QRadioButton(centralwidget);
        sumSelect->setObjectName(QStringLiteral("sumSelect"));
        sumSelect->setGeometry(QRect(430, 20, 82, 17));
        subSelected = new QRadioButton(centralwidget);
        subSelected->setObjectName(QStringLiteral("subSelected"));
        subSelected->setGeometry(QRect(430, 40, 82, 17));
        multiplicationSelected = new QRadioButton(centralwidget);
        multiplicationSelected->setObjectName(QStringLiteral("multiplicationSelected"));
        multiplicationSelected->setGeometry(QRect(430, 60, 82, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 522, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        confirmButton->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        firstNum->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">N1</span></p></body></html>", Q_NULLPTR));
        secNum->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">N2</span></p></body></html>", Q_NULLPTR));
        op->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">x</span></p></body></html>", Q_NULLPTR));
        asw->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">asw</span></p></body></html>", Q_NULLPTR));
        equals->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">=</span></p><p><br/></p></body></html>", Q_NULLPTR));
        newOpButton->setText(QApplication::translate("MainWindow", "New Op.", Q_NULLPTR));
        sumSelect->setText(QApplication::translate("MainWindow", "Sum", Q_NULLPTR));
        subSelected->setText(QApplication::translate("MainWindow", "Subtraction", Q_NULLPTR));
        multiplicationSelected->setText(QApplication::translate("MainWindow", "Multiplicarion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
