#include <QApplication>

#include "frmserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    frmServer w;
    w.show();

    return a.exec();
}
