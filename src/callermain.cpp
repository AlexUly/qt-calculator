#include "callermainwindow.h"

void CallerMainWindow::add0() {
    lineEdit->setText(lineEdit->text() + "0");
    display = display + "0";
};

void CallerMainWindow::add1() {
    lineEdit->setText(lineEdit->text() + "1");
    display = display + "1";
};

void CallerMainWindow::add2() {
    lineEdit->setText(lineEdit->text() + "2");
    display = display + "2";
};

void CallerMainWindow::add3() {
    lineEdit->setText(lineEdit->text() + "3");
    display = display + "3";
};

void CallerMainWindow::add4() {
    lineEdit->setText(lineEdit->text() + "4");
    display = display + "4";
};

void CallerMainWindow::add5() {
    lineEdit->setText(lineEdit->text() + "5");
    display = display + "5";
};

void CallerMainWindow::add6() {
    lineEdit->setText(lineEdit->text() + "6");
    display = display + "6";
};

void CallerMainWindow::add7() {
    lineEdit->setText(lineEdit->text() + "7");
    display = display + "7";
};

void CallerMainWindow::add8() {
    lineEdit->setText(lineEdit->text() + "8");
    display = display + "8";
};

void CallerMainWindow::add9() {
    lineEdit->setText(lineEdit->text() + "9");
    display = display + "9";
};

void CallerMainWindow::plus() {
    temp1 = lineEdit->text().toInt();
    res = temp1;
    display = display + "+";
    lineEdit->setText(QString::fromStdString(""));
    lineEdit_2->setText(QString::fromStdString(display));
    op = 1;
};

void CallerMainWindow::minus() {
    temp1 = lineEdit->text().toInt();
    res = temp1;
    display = display + "-";
    lineEdit->setText(QString::fromStdString(""));
    lineEdit_2->setText(QString::fromStdString(display));
    op = 2;
};

void CallerMainWindow::mul() {
    temp1 = lineEdit->text().toInt();
    res = temp1;
    display = display + "*";
    lineEdit->setText(QString::fromStdString(""));
    lineEdit_2->setText(QString::fromStdString(display));
    op = 3;
};

void CallerMainWindow::div() {
    temp1 = lineEdit->text().toInt();
    if (res == 0) {
        res = temp1;
    }
    display = display + "/";
    lineEdit->setText(QString::fromStdString(""));
    lineEdit_2->setText(QString::fromStdString(display));
    op = 4;
};

void CallerMainWindow::clear() {
    temp1 = 0;
    temp2 = 0;
    res = 0;
    lineEdit->setText("");
    lineEdit_2->setText("");
};

void CallerMainWindow::equal() {
    switch (op) {
        case 0:
            lineEdit_2->setText(QString::fromStdString(display));
            lineEdit->setText(QString::number(res));
            break;
        case 1:
            temp2 = lineEdit->text().toInt();
            res += temp2;
            lineEdit_2->setText(QString::fromStdString(display));
            display = std::to_string(res);
            lineEdit->setText(QString::number(res));
            break;
        case 2:
            temp2 = lineEdit->text().toInt();
            res -= temp2;
            lineEdit_2->setText(QString::fromStdString(display));
            display = std::to_string(res);
            lineEdit->setText(QString::number(res));
            break;
        case 3:
            temp2 = lineEdit->text().toInt();
            res *= temp2;
            lineEdit_2->setText(QString::fromStdString(display));
            display = std::to_string(res);
            lineEdit->setText(QString::number(res));
            break;
        case 4:
            temp2 = lineEdit->text().toInt();
            if (temp2 != 0) {
                res /= temp2;
                lineEdit_2->setText(QString::fromStdString(display));
                display = std::to_string(res);
                lineEdit->setText(QString::number(res));
                temp1 = 1;
            } else {
                lineEdit->setText("Error!");
            }
            break;
    }
};

