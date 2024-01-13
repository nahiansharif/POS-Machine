#include "harriscafe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HarrisCafe w;

    w.setWindowState(Qt::WindowFullScreen);
    w.showMaximized();
    return a.exec();
}
