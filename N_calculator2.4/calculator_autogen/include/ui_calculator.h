/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *MEM_CLEAR;
    QPushButton *COSE;
    QPushButton *SINE;
    QPushButton *MEM_GET;
    QPushButton *B_0;
    QPushButton *B_9;
    QPushButton *TAN;
    QPushButton *B_2;
    QPushButton *MEM_ADD;
    QPushButton *B_4;
    QPushButton *B_5;
    QPushButton *log;
    QPushButton *B_8;
    QPushButton *POINT;
    QPushButton *B_6;
    QLineEdit *Dispaly;
    QPushButton *B_3;
    QPushButton *B_1;
    QPushButton *B_7;
    QPushButton *POEWR_BY_2;
    QPushButton *POWER;
    QPushButton *PLUS_MINUS;
    QPushButton *ANS;
    QPushButton *BACKSPACE;
    QPushButton *DIVIDE;
    QPushButton *EQDclear;
    QPushButton *MULTIPLY;
    QPushButton *CLEAR;
    QPushButton *PLUS;
    QPushButton *MINUS;
    QPushButton *exponents;
    QPushButton *ROOT;
    QPushButton *inverse;
    QRadioButton *INV;
    QTextEdit *EQdispaly;
    QPushButton *equal;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(382, 415);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy);
        calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(201, 203, 239, 162), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 10px;\n"
"}"));
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        MEM_CLEAR = new QPushButton(centralwidget);
        MEM_CLEAR->setObjectName("MEM_CLEAR");
        sizePolicy.setHeightForWidth(MEM_CLEAR->sizePolicy().hasHeightForWidth());
        MEM_CLEAR->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        MEM_CLEAR->setFont(font);
        MEM_CLEAR->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(MEM_CLEAR, 1, 1, 1, 1);

        COSE = new QPushButton(centralwidget);
        COSE->setObjectName("COSE");
        sizePolicy.setHeightForWidth(COSE->sizePolicy().hasHeightForWidth());
        COSE->setSizePolicy(sizePolicy);
        COSE->setFont(font);
        COSE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(COSE, 7, 2, 1, 1);

        SINE = new QPushButton(centralwidget);
        SINE->setObjectName("SINE");
        sizePolicy.setHeightForWidth(SINE->sizePolicy().hasHeightForWidth());
        SINE->setSizePolicy(sizePolicy);
        SINE->setFont(font);
        SINE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(SINE, 7, 0, 1, 1);

        MEM_GET = new QPushButton(centralwidget);
        MEM_GET->setObjectName("MEM_GET");
        sizePolicy.setHeightForWidth(MEM_GET->sizePolicy().hasHeightForWidth());
        MEM_GET->setSizePolicy(sizePolicy);
        MEM_GET->setFont(font);
        MEM_GET->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(MEM_GET, 1, 2, 1, 1);

        B_0 = new QPushButton(centralwidget);
        B_0->setObjectName("B_0");
        sizePolicy.setHeightForWidth(B_0->sizePolicy().hasHeightForWidth());
        B_0->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        B_0->setFont(font1);
        B_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_0, 6, 1, 1, 1);

        B_9 = new QPushButton(centralwidget);
        B_9->setObjectName("B_9");
        sizePolicy.setHeightForWidth(B_9->sizePolicy().hasHeightForWidth());
        B_9->setSizePolicy(sizePolicy);
        B_9->setFont(font1);
        B_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_9, 2, 2, 1, 1);

        TAN = new QPushButton(centralwidget);
        TAN->setObjectName("TAN");
        sizePolicy.setHeightForWidth(TAN->sizePolicy().hasHeightForWidth());
        TAN->setSizePolicy(sizePolicy);
        TAN->setFont(font);
        TAN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(TAN, 7, 1, 1, 1);

        B_2 = new QPushButton(centralwidget);
        B_2->setObjectName("B_2");
        sizePolicy.setHeightForWidth(B_2->sizePolicy().hasHeightForWidth());
        B_2->setSizePolicy(sizePolicy);
        B_2->setFont(font1);
        B_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_2, 5, 1, 1, 1);

        MEM_ADD = new QPushButton(centralwidget);
        MEM_ADD->setObjectName("MEM_ADD");
        sizePolicy.setHeightForWidth(MEM_ADD->sizePolicy().hasHeightForWidth());
        MEM_ADD->setSizePolicy(sizePolicy);
        MEM_ADD->setFont(font);
        MEM_ADD->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(MEM_ADD, 1, 0, 1, 1);

        B_4 = new QPushButton(centralwidget);
        B_4->setObjectName("B_4");
        sizePolicy.setHeightForWidth(B_4->sizePolicy().hasHeightForWidth());
        B_4->setSizePolicy(sizePolicy);
        B_4->setFont(font1);
        B_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_4, 4, 2, 1, 1);

        B_5 = new QPushButton(centralwidget);
        B_5->setObjectName("B_5");
        sizePolicy.setHeightForWidth(B_5->sizePolicy().hasHeightForWidth());
        B_5->setSizePolicy(sizePolicy);
        B_5->setFont(font1);
        B_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_5, 4, 1, 1, 1);

        log = new QPushButton(centralwidget);
        log->setObjectName("log");
        sizePolicy.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy);
        log->setFont(font);
        log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(log, 8, 0, 1, 1);

        B_8 = new QPushButton(centralwidget);
        B_8->setObjectName("B_8");
        sizePolicy.setHeightForWidth(B_8->sizePolicy().hasHeightForWidth());
        B_8->setSizePolicy(sizePolicy);
        B_8->setFont(font1);
        B_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_8, 2, 1, 1, 1);

        POINT = new QPushButton(centralwidget);
        POINT->setObjectName("POINT");
        sizePolicy.setHeightForWidth(POINT->sizePolicy().hasHeightForWidth());
        POINT->setSizePolicy(sizePolicy);
        POINT->setFont(font1);
        POINT->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(POINT, 6, 0, 1, 1);

        B_6 = new QPushButton(centralwidget);
        B_6->setObjectName("B_6");
        sizePolicy.setHeightForWidth(B_6->sizePolicy().hasHeightForWidth());
        B_6->setSizePolicy(sizePolicy);
        B_6->setFont(font1);
        B_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_6, 4, 0, 1, 1);

        Dispaly = new QLineEdit(centralwidget);
        Dispaly->setObjectName("Dispaly");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Dispaly->sizePolicy().hasHeightForWidth());
        Dispaly->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        Dispaly->setFont(font2);
        Dispaly->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(49, 74, 111);\n"
"	border:1px solid gray;\n"
"	color: rgb(255, 255, 255);\n"
"	border-top-left-radius: 10px;\n"
"}"));
        Dispaly->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(Dispaly, 0, 0, 1, 3);

        B_3 = new QPushButton(centralwidget);
        B_3->setObjectName("B_3");
        sizePolicy.setHeightForWidth(B_3->sizePolicy().hasHeightForWidth());
        B_3->setSizePolicy(sizePolicy);
        B_3->setFont(font1);
        B_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_3, 5, 0, 1, 1);

        B_1 = new QPushButton(centralwidget);
        B_1->setObjectName("B_1");
        sizePolicy.setHeightForWidth(B_1->sizePolicy().hasHeightForWidth());
        B_1->setSizePolicy(sizePolicy);
        B_1->setFont(font1);
        B_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_1, 5, 2, 1, 1);

        B_7 = new QPushButton(centralwidget);
        B_7->setObjectName("B_7");
        sizePolicy.setHeightForWidth(B_7->sizePolicy().hasHeightForWidth());
        B_7->setSizePolicy(sizePolicy);
        B_7->setFont(font1);
        B_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(B_7, 2, 0, 1, 1);

        POEWR_BY_2 = new QPushButton(centralwidget);
        POEWR_BY_2->setObjectName("POEWR_BY_2");
        sizePolicy.setHeightForWidth(POEWR_BY_2->sizePolicy().hasHeightForWidth());
        POEWR_BY_2->setSizePolicy(sizePolicy);
        POEWR_BY_2->setFont(font);
        POEWR_BY_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(POEWR_BY_2, 8, 2, 1, 1);

        POWER = new QPushButton(centralwidget);
        POWER->setObjectName("POWER");
        sizePolicy.setHeightForWidth(POWER->sizePolicy().hasHeightForWidth());
        POWER->setSizePolicy(sizePolicy);
        POWER->setFont(font);
        POWER->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(POWER, 8, 1, 1, 1);

        PLUS_MINUS = new QPushButton(centralwidget);
        PLUS_MINUS->setObjectName("PLUS_MINUS");
        sizePolicy.setHeightForWidth(PLUS_MINUS->sizePolicy().hasHeightForWidth());
        PLUS_MINUS->setSizePolicy(sizePolicy);
        PLUS_MINUS->setFont(font1);
        PLUS_MINUS->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(131, 131, 131);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(PLUS_MINUS, 6, 2, 1, 1);

        ANS = new QPushButton(centralwidget);
        ANS->setObjectName("ANS");
        sizePolicy.setHeightForWidth(ANS->sizePolicy().hasHeightForWidth());
        ANS->setSizePolicy(sizePolicy);
        ANS->setFont(font);
        ANS->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(ANS, 1, 3, 1, 1);

        BACKSPACE = new QPushButton(centralwidget);
        BACKSPACE->setObjectName("BACKSPACE");
        sizePolicy.setHeightForWidth(BACKSPACE->sizePolicy().hasHeightForWidth());
        BACKSPACE->setSizePolicy(sizePolicy);
        BACKSPACE->setFont(font);
        BACKSPACE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(BACKSPACE, 1, 4, 1, 1);

        DIVIDE = new QPushButton(centralwidget);
        DIVIDE->setObjectName("DIVIDE");
        sizePolicy.setHeightForWidth(DIVIDE->sizePolicy().hasHeightForWidth());
        DIVIDE->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        DIVIDE->setFont(font3);
        DIVIDE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 127);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(45, 135, 66);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(DIVIDE, 2, 3, 1, 1);

        EQDclear = new QPushButton(centralwidget);
        EQDclear->setObjectName("EQDclear");
        sizePolicy.setHeightForWidth(EQDclear->sizePolicy().hasHeightForWidth());
        EQDclear->setSizePolicy(sizePolicy);
        EQDclear->setFont(font);
        EQDclear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(EQDclear, 2, 4, 1, 1);

        MULTIPLY = new QPushButton(centralwidget);
        MULTIPLY->setObjectName("MULTIPLY");
        sizePolicy.setHeightForWidth(MULTIPLY->sizePolicy().hasHeightForWidth());
        MULTIPLY->setSizePolicy(sizePolicy);
        MULTIPLY->setFont(font);
        MULTIPLY->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 127);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(45, 135, 66);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(MULTIPLY, 4, 3, 1, 1);

        CLEAR = new QPushButton(centralwidget);
        CLEAR->setObjectName("CLEAR");
        sizePolicy.setHeightForWidth(CLEAR->sizePolicy().hasHeightForWidth());
        CLEAR->setSizePolicy(sizePolicy);
        CLEAR->setFont(font);
        CLEAR->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(CLEAR, 4, 4, 1, 1);

        PLUS = new QPushButton(centralwidget);
        PLUS->setObjectName("PLUS");
        sizePolicy.setHeightForWidth(PLUS->sizePolicy().hasHeightForWidth());
        PLUS->setSizePolicy(sizePolicy);
        PLUS->setFont(font3);
        PLUS->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 127);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(45, 135, 66);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(PLUS, 5, 3, 1, 1);

        MINUS = new QPushButton(centralwidget);
        MINUS->setObjectName("MINUS");
        sizePolicy.setHeightForWidth(MINUS->sizePolicy().hasHeightForWidth());
        MINUS->setSizePolicy(sizePolicy);
        MINUS->setFont(font3);
        MINUS->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 127);\n"
"	border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	background-color: rgb(45, 135, 66);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(MINUS, 6, 3, 1, 1);

        exponents = new QPushButton(centralwidget);
        exponents->setObjectName("exponents");
        sizePolicy.setHeightForWidth(exponents->sizePolicy().hasHeightForWidth());
        exponents->setSizePolicy(sizePolicy);
        exponents->setFont(font);
        exponents->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(exponents, 7, 3, 1, 1);

        ROOT = new QPushButton(centralwidget);
        ROOT->setObjectName("ROOT");
        sizePolicy.setHeightForWidth(ROOT->sizePolicy().hasHeightForWidth());
        ROOT->setSizePolicy(sizePolicy);
        ROOT->setFont(font);
        ROOT->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(ROOT, 8, 3, 1, 1);

        inverse = new QPushButton(centralwidget);
        inverse->setObjectName("inverse");
        sizePolicy.setHeightForWidth(inverse->sizePolicy().hasHeightForWidth());
        inverse->setSizePolicy(sizePolicy);
        inverse->setFont(font);
        inverse->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(48, 144, 144);\n"
"border-radius: 10px;\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(inverse, 7, 4, 1, 1);

        INV = new QRadioButton(centralwidget);
        INV->setObjectName("INV");
        sizePolicy.setHeightForWidth(INV->sizePolicy().hasHeightForWidth());
        INV->setSizePolicy(sizePolicy);
        INV->setFont(font);
        INV->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color: rgb(170, 0, 255);\n"
"border-radius: 10px;\n"
"}"));
        INV->setCheckable(true);
        INV->setAutoRepeatInterval(100);

        gridLayout->addWidget(INV, 8, 4, 1, 1);

        EQdispaly = new QTextEdit(centralwidget);
        EQdispaly->setObjectName("EQdispaly");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EQdispaly->sizePolicy().hasHeightForWidth());
        EQdispaly->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(10);
        EQdispaly->setFont(font4);
        EQdispaly->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        EQdispaly->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	border : none ;\n"
"	background-color: rgb(49, 74, 111);\n"
"	color: rgb(244, 244, 223);\n"
"}"));
        EQdispaly->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        EQdispaly->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        EQdispaly->setLineWrapMode(QTextEdit::LineWrapMode::NoWrap);

        gridLayout->addWidget(EQdispaly, 0, 3, 1, 2);

        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        sizePolicy.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy);
        equal->setFont(font);
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color: rgb(255, 85, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}\n"
"QPushButton::pressed{\n"
"	\n"
"	background-color: rgb(194, 65, 0);\n"
"    border:1px solid gray;\n"
"	padding:5px\n"
"\n"
"}"));

        gridLayout->addWidget(equal, 5, 4, 2, 1);

        calculator->setCentralWidget(centralwidget);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        MEM_CLEAR->setText(QCoreApplication::translate("calculator", "M-", nullptr));
        COSE->setText(QCoreApplication::translate("calculator", "cos(", nullptr));
        SINE->setText(QCoreApplication::translate("calculator", "sin(", nullptr));
        MEM_GET->setText(QCoreApplication::translate("calculator", "M", nullptr));
        B_0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        B_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        TAN->setText(QCoreApplication::translate("calculator", "tan(", nullptr));
        B_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        MEM_ADD->setText(QCoreApplication::translate("calculator", "M+", nullptr));
        B_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        B_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        log->setText(QCoreApplication::translate("calculator", "log\342\202\201\342\202\200(", nullptr));
        B_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        POINT->setText(QCoreApplication::translate("calculator", ".", nullptr));
        B_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        Dispaly->setText(QCoreApplication::translate("calculator", "0", nullptr));
        B_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        B_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        B_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        POEWR_BY_2->setText(QCoreApplication::translate("calculator", "X\302\262", nullptr));
        POWER->setText(QCoreApplication::translate("calculator", "X\342\201\277", nullptr));
        PLUS_MINUS->setText(QCoreApplication::translate("calculator", "+/-", nullptr));
        ANS->setText(QCoreApplication::translate("calculator", "ANS", nullptr));
        BACKSPACE->setText(QCoreApplication::translate("calculator", "\342\214\253", nullptr));
        DIVIDE->setText(QCoreApplication::translate("calculator", "\303\267", nullptr));
        EQDclear->setText(QCoreApplication::translate("calculator", "C", nullptr));
        MULTIPLY->setText(QCoreApplication::translate("calculator", "x", nullptr));
        CLEAR->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        PLUS->setText(QCoreApplication::translate("calculator", "+", nullptr));
        MINUS->setText(QCoreApplication::translate("calculator", "-", nullptr));
        exponents->setText(QCoreApplication::translate("calculator", "e", nullptr));
        ROOT->setText(QCoreApplication::translate("calculator", "\302\262\342\210\232", nullptr));
        inverse->setText(QCoreApplication::translate("calculator", "x\342\201\273\302\271", nullptr));
        INV->setText(QCoreApplication::translate("calculator", "Inv", nullptr));
        EQdispaly->setHtml(QCoreApplication::translate("calculator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        equal->setText(QCoreApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
