#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "inisettings.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //加载配置文件
    theIni.settings_init(theIni.self_AppPath()+"\cfg.ini");


    qDebug()<<theIni.getStrImp("config/version");


    MainWindow w;
    w.show();

    return a.exec();
}
