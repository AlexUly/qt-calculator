#include "callermainwindow.h"
#include "caller.cpp"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    CallerMainWindow window(nullptr);
    Ui::Calculator caller;
    caller.setupUi(&window);
    window.lineEdit = caller.lineEdit;
    window.lineEdit_2 = caller.lineEdit_2;
    window.show();

    return QApplication::exec();
}
