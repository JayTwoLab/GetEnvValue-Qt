// GetEnv.cpp

#include "GetEnv.h"

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)

namespace j2 {

namespace Qt6 {

QStringList GetOSPath()
{
    QStringList ret;

    QByteArray baEnv = qgetenv("PATH"); // use in Windows
    if ( baEnv.length() == 0 )
        return ret;

    QString str = QString(baEnv);

#ifdef Q_OS_WIN
    QRegularExpression rx("(\\;)"); // token is ;
#endif
    
#if defined(Q_OS_LINUX) || defined(Q_OS_MAC)  
    QRegularExpression rx("(\\:)"); // token is :
#endif     
    ret = str.split(rx);

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
    
    return ret;
}


} // namespace QtGetEnv

} // namespace j2

#endif // #if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
