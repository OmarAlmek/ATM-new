#include "atm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    atm w;
    w.show();
    return a.exec();
}
