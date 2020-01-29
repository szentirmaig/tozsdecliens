#include <QApplication>
#include "mysocket.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MySocket msocket;
    msocket.Test();

    return a.exec();
}
