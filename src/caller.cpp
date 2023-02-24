#ifndef CALLERZGPBVU_H
#define CALLERZGPBVU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_16;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_15;
    QLineEdit *lineEdit_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(500, 640);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(500, 640));
        Calculator->setMaximumSize(QSize(500, 640));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 0, 481, 591));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gridLayoutWidget_2->sizePolicy().hasHeightForWidth());
        gridLayoutWidget_2->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_14 = new QPushButton(gridLayoutWidget_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_14, 11, 3, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_6, 5, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget_2);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy3.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_16, 11, 2, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy3.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_11, 3, 3, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy3.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_13, 2, 3, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy3.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_12, 5, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy3.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy3.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_8, 5, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy3.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_9, 3, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 4);

        pushButton_10 = new QPushButton(gridLayoutWidget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy3.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_10, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_2, 11, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_4, 5, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy3.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_15, 11, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_2, 0, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);
        QObject::connect(pushButton, SIGNAL(clicked()), Calculator, SLOT(add1()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Calculator, SLOT(add2()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), Calculator, SLOT(add3()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), Calculator, SLOT(add4()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), Calculator, SLOT(add5()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), Calculator, SLOT(add6()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), Calculator, SLOT(add7()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Calculator, SLOT(add8()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Calculator, SLOT(add9()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), Calculator, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Calculator, SLOT(add0()));
        QObject::connect(pushButton_16, SIGNAL(clicked()), Calculator, SLOT(equal()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), Calculator, SLOT(plus()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), Calculator, SLOT(mul()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), Calculator, SLOT(minus()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), Calculator, SLOT(div()));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Calculator", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALLERZGPBVU_H
