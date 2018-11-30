/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QHBoxLayout *horizontalLayout_6;
    QSlider *horizontalSlider_Min;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_Min;
    QHBoxLayout *horizontalLayout_5;
    QSlider *horizontalSlider_Max;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber_Max;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *horizontalSlider_Time;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Start;
    QListWidget *listWidget_lista;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(611, 437);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_ip = new QLineEdit(centralWidget);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));

        verticalLayout->addWidget(lineEdit_ip);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));

        horizontalLayout->addWidget(pushButton_Connect);

        pushButton_Disconnect = new QPushButton(centralWidget);
        pushButton_Disconnect->setObjectName(QStringLiteral("pushButton_Disconnect"));

        horizontalLayout->addWidget(pushButton_Disconnect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSlider_Min = new QSlider(centralWidget);
        horizontalSlider_Min->setObjectName(QStringLiteral("horizontalSlider_Min"));
        horizontalSlider_Min->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_Min);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        lcdNumber_Min = new QLCDNumber(centralWidget);
        lcdNumber_Min->setObjectName(QStringLiteral("lcdNumber_Min"));

        verticalLayout_2->addWidget(lcdNumber_Min);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSlider_Max = new QSlider(centralWidget);
        horizontalSlider_Max->setObjectName(QStringLiteral("horizontalSlider_Max"));
        horizontalSlider_Max->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_Max);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lcdNumber_Max = new QLCDNumber(centralWidget);
        lcdNumber_Max->setObjectName(QStringLiteral("lcdNumber_Max"));

        verticalLayout_3->addWidget(lcdNumber_Max);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSlider_Time = new QSlider(centralWidget);
        horizontalSlider_Time->setObjectName(QStringLiteral("horizontalSlider_Time"));
        horizontalSlider_Time->setMinimum(1);
        horizontalSlider_Time->setMaximum(10);
        horizontalSlider_Time->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_Time);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName(QStringLiteral("pushButton_Start"));

        horizontalLayout_2->addWidget(pushButton_Start);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_4);

        listWidget_lista = new QListWidget(centralWidget);
        listWidget_lista->setObjectName(QStringLiteral("listWidget_lista"));

        horizontalLayout_7->addWidget(listWidget_lista);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_Min, SIGNAL(valueChanged(int)), lcdNumber_Min, SLOT(display(int)));
        QObject::connect(horizontalSlider_Max, SIGNAL(valueChanged(int)), lcdNumber_Max, SLOT(display(int)));
        QObject::connect(horizontalSlider_Time, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QApplication::translate("MainWindow", "Disconncet", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "MIN", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        label->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
