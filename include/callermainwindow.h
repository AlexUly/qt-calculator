#include <QApplication>
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <string>

class CallerMainWindow : public QMainWindow {
Q_OBJECT

public:
    int res = 0;
    int temp1 = 0;
    int temp2 = 0;

    CallerMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {}

    QLineEdit *lineEdit = nullptr;
    QLineEdit *lineEdit_2 = nullptr;
    int op = 0;
    std::string display;

public slots:

    void add0();

    void add1();

    void add2();

    void add3();

    void add4();

    void add5();

    void add6();

    void add7();

    void add8();

    void add9();

    void plus();

    void minus();

    void mul();

    void div();

    void clear();

    void equal();
};

