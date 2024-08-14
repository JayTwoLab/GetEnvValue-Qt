// GetEnv.cpp

#include "GetEnv.h"

#ifdef Q_QT_VERSION

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)

// #include <QDebug>

namespace j2 {

namespace Qt6 {

#ifdef Q_OS_WIN

QStringList GetOSPath()
{
    QStringList ret;

    QByteArray baEnv = qgetenv("PATH"); // use in Windows
    if ( baEnv.length() == 0 )
        return ret;

    QString str = QString(baEnv);
    // qDebug() << str;

    QRegularExpression rx("(\\;)"); // token is ;
    ret = str.split(rx);

    return ret;
}

#endif

#ifdef Q_OS_LINUX

QStringList GetOSPath()
{
    QStringList ret;

    QByteArray baEnv = qgetenv("PATH"); // use in Linux
    if ( baEnv.length() == 0 )
        return ret;

    QString str = QString(baEnv);
    // qDebug() << str;

    QRegularExpression rx("(\\:)"); // token is :
    ret = str.split(rx);

    return ret;
}

#endif

#ifdef Q_OS_MAC

QStringList GetOSPath()
{
    QStringList ret;

    QByteArray baEnv = qgetenv("PATH"); // use in Mac
    if ( baEnv.length() == 0 )
        return ret;

    QString str = QString(baEnv);
    // qDebug() << str;

    QRegularExpression rx("(\\:)"); // token is :
    ret = str.split(rx);

    return ret;
}

#endif

// TODO: define your own OS function ...

#ifdef Q_OS_ANDROID
#endif

#ifdef Q_OS_IOS
#endif

#ifdef Q_OS_CYGWIN
#endif

#ifdef Q_OS_FREEBSD
#endif

#ifdef Q_OS_OPENBSD
#endif


} // namespace QtGetEnv

} // namespace j2

#endif // #if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)

#endif // #ifdef Q_QT_VERSION
