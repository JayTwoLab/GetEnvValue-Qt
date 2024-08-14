// GetEnv.h
#ifndef QT_GET_ENV_H
#define QT_GET_ENV_H

#include <QtGlobal>

#if QT_VERSION_MAJOR == 6

#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QRegularExpression>

namespace j2
{
    namespace Qt6
    {

        /// \brief Get path list of OS
        /// \return path list of OS
        QStringList GetOSPath();




    } // namespace Qt6

} // namespace j2

#endif // QT_VERSION_MAJOR == 6

#endif // #ifndef QT_GET_ENV_H
