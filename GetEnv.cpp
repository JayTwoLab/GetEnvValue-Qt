// GetEnv.cpp

#include "GetEnv.h"

#if QT_VERSION_MAJOR == 6

namespace j2 {

namespace Qt6 {

QStringList GetOSPath()
{
    QStringList ret;

    QByteArray baEnv = qgetenv("PATH");
    if ( baEnv.length() == 0 )
        return ret;

    QString str = QString(baEnv);

    QString pattern = "(\\:)";

#ifdef Q_OS_WIN
     pattern = "(\\;)";
#endif

#ifdef Q_OS_LINUX
#endif

#ifdef Q_OS_MAC
#endif

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

    QRegularExpression rx( pattern );
    ret = str.split(rx);
    return ret;
}


} // namespace QtGetEnv

} // namespace j2

#endif // #if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
