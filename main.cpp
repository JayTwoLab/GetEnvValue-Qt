// main.cpp
// tested in Qt 5.15 & Qt 6.1.2

#include <QtGlobal>
#include <QObject>
#include <QString>
#include <QStringList>
#include <QRegularExpression>
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray baEnv = qgetenv("PATH"); // use in Windows
    if ( baEnv.length() >= 1 )
    {
        QString str = QString(baEnv);
        qDebug() << str;

        QRegularExpression rx("(\\;)"); // token is ;
        QStringList query = str.split(rx);
        foreach (QString pathName, query)
        {
            qDebug() << pathName;
        }
    }

    return 0; // return a.exec();
}
