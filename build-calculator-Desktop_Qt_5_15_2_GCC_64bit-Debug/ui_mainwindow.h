/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChange_Zn;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QPushButton *btn4;
    QPushButton *btn_minus;
    QPushButton *btn2;
    QPushButton *btn5;
    QPushButton *n_val_up;
    QPushButton *btn_del;
    QPushButton *btn8;
    QPushButton *btn0;
    QPushButton *btn_ch_sign;
    QPushButton *btn_mltp;
    QPushButton *btn_eq;
    QPushButton *btn_power;
    QPushButton *btn_div;
    QPushButton *btn1;
    QLineEdit *display;
    QPushButton *btn_plus;
    QPushButton *btn9;
    QPushButton *btn3;
    QPushButton *btn6;
    QPushButton *btn_dlog;
    QPushButton *btn7;
    QSpacerItem *verticalSpacer;
    QLabel *n_val;
    QLabel *err_msg;
    QPushButton *n_val_down;
    QPushButton *btn_clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 582);
        actionChange_Zn = new QAction(MainWindow);
        actionChange_Zn->setObjectName(QString::fromUtf8("actionChange_Zn"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setMinimumSize(QSize(50, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Palladio L"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        btn4->setFont(font);
        btn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn4, 7, 0, 1, 1);

        btn_minus = new QPushButton(centralwidget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        sizePolicy.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy);
        btn_minus->setMinimumSize(QSize(50, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("URW Palladio L"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        btn_minus->setFont(font1);
        btn_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_minus, 9, 4, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setMinimumSize(QSize(50, 40));
        btn2->setFont(font);
        btn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn2, 8, 1, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setMinimumSize(QSize(50, 40));
        btn5->setFont(font);
        btn5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn5, 7, 1, 1, 1);

        n_val_up = new QPushButton(centralwidget);
        n_val_up->setObjectName(QString::fromUtf8("n_val_up"));
        sizePolicy.setHeightForWidth(n_val_up->sizePolicy().hasHeightForWidth());
        n_val_up->setSizePolicy(sizePolicy);
        n_val_up->setMinimumSize(QSize(50, 30));
        n_val_up->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("URW Palladio L"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        n_val_up->setFont(font2);
        n_val_up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A52A2A;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));

        gridLayout_2->addWidget(n_val_up, 0, 3, 1, 1);

        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        sizePolicy.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy);
        btn_del->setMinimumSize(QSize(55, 40));
        btn_del->setFont(font1);
        btn_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_del, 6, 3, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setMinimumSize(QSize(50, 40));
        btn8->setFont(font);
        btn8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn8, 6, 1, 1, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMinimumSize(QSize(50, 40));
        btn0->setFont(font);
        btn0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn0, 9, 1, 1, 1);

        btn_ch_sign = new QPushButton(centralwidget);
        btn_ch_sign->setObjectName(QString::fromUtf8("btn_ch_sign"));
        sizePolicy.setHeightForWidth(btn_ch_sign->sizePolicy().hasHeightForWidth());
        btn_ch_sign->setSizePolicy(sizePolicy);
        btn_ch_sign->setMinimumSize(QSize(50, 40));
        btn_ch_sign->setFont(font1);
        btn_ch_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_ch_sign, 9, 2, 1, 1);

        btn_mltp = new QPushButton(centralwidget);
        btn_mltp->setObjectName(QString::fromUtf8("btn_mltp"));
        sizePolicy.setHeightForWidth(btn_mltp->sizePolicy().hasHeightForWidth());
        btn_mltp->setSizePolicy(sizePolicy);
        btn_mltp->setMinimumSize(QSize(50, 40));
        btn_mltp->setFont(font1);
        btn_mltp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_mltp, 8, 3, 1, 1);

        btn_eq = new QPushButton(centralwidget);
        btn_eq->setObjectName(QString::fromUtf8("btn_eq"));
        sizePolicy.setHeightForWidth(btn_eq->sizePolicy().hasHeightForWidth());
        btn_eq->setSizePolicy(sizePolicy);
        btn_eq->setMinimumSize(QSize(50, 40));
        btn_eq->setFont(font1);
        btn_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_eq, 6, 4, 1, 1);

        btn_power = new QPushButton(centralwidget);
        btn_power->setObjectName(QString::fromUtf8("btn_power"));
        sizePolicy.setHeightForWidth(btn_power->sizePolicy().hasHeightForWidth());
        btn_power->setSizePolicy(sizePolicy);
        btn_power->setMinimumSize(QSize(50, 40));
        btn_power->setFont(font1);
        btn_power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_power, 7, 3, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);
        btn_div->setMinimumSize(QSize(0, 40));
        btn_div->setFont(font1);
        btn_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_div, 8, 4, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(50, 40));
        btn1->setFont(font);
        btn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn1, 8, 0, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setMinimumSize(QSize(0, 50));
        display->setMaximumSize(QSize(16777215, 200));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Serif"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        display->setFont(font3);
        display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	border-radius: 5px;\n"
"	color: #ffffff;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setReadOnly(true);

        gridLayout_2->addWidget(display, 4, 0, 1, 5);

        btn_plus = new QPushButton(centralwidget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);
        btn_plus->setMinimumSize(QSize(50, 40));
        btn_plus->setFont(font1);
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_plus, 9, 3, 1, 1);

        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setMinimumSize(QSize(50, 40));
        btn9->setFont(font);
        btn9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn9, 6, 2, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setMinimumSize(QSize(50, 40));
        btn3->setFont(font);
        btn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn3, 8, 2, 1, 1);

        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setMinimumSize(QSize(50, 40));
        btn6->setFont(font);
        btn6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn6, 7, 2, 1, 1);

        btn_dlog = new QPushButton(centralwidget);
        btn_dlog->setObjectName(QString::fromUtf8("btn_dlog"));
        sizePolicy.setHeightForWidth(btn_dlog->sizePolicy().hasHeightForWidth());
        btn_dlog->setSizePolicy(sizePolicy);
        btn_dlog->setMinimumSize(QSize(0, 45));
        btn_dlog->setFont(font1);
        btn_dlog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_dlog, 7, 4, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setMinimumSize(QSize(50, 40));
        btn7->setFont(font);
        btn7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn7, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        n_val = new QLabel(centralwidget);
        n_val->setObjectName(QString::fromUtf8("n_val"));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setWeight(50);
        n_val->setFont(font4);
        n_val->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: #A52A2A;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        n_val->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(n_val, 0, 2, 1, 1);

        err_msg = new QLabel(centralwidget);
        err_msg->setObjectName(QString::fromUtf8("err_msg"));
        err_msg->setMinimumSize(QSize(0, 50));
        err_msg->setMaximumSize(QSize(16777215, 50));
        err_msg->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: white;\n"
"	border-radius: 5px;\n"
"	color: red;\n"
"}"));

        gridLayout_2->addWidget(err_msg, 2, 0, 1, 5);

        n_val_down = new QPushButton(centralwidget);
        n_val_down->setObjectName(QString::fromUtf8("n_val_down"));
        sizePolicy.setHeightForWidth(n_val_down->sizePolicy().hasHeightForWidth());
        n_val_down->setSizePolicy(sizePolicy);
        n_val_down->setMinimumSize(QSize(50, 30));
        n_val_down->setMaximumSize(QSize(16777215, 30));
        n_val_down->setFont(font2);
        n_val_down->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A52A2A;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));

        gridLayout_2->addWidget(n_val_down, 0, 1, 1, 1);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        btn_clear->setMinimumSize(QSize(50, 40));
        QFont font5;
        font5.setPointSize(18);
        btn_clear->setFont(font5);
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(btn_clear, 9, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\321\203\320\273\320\265\320\275 \320\232\320\260\320\273\320\272\321\203\320\273\320\260\321\202\320\276\321\200", nullptr));
        actionChange_Zn->setText(QCoreApplication::translate("MainWindow", "Change Zn", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n_val_up->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_ch_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btn_mltp->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        display->setText(QString());
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_dlog->setText(QCoreApplication::translate("MainWindow", "dlog", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n_val->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        err_msg->setText(QString());
        n_val_down->setText(QCoreApplication::translate("MainWindow", "prev", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
