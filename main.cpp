// main.cpp

#include <QCoreApplication>
#include <QDebug>

#include "GetEnv.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList pathList = j2::Qt6::GetOSPath();
    foreach (QString pathName, pathList)
    {
        qDebug() << pathName;
    }

    return 0; // return a.exec();
}
