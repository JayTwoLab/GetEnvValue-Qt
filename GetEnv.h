// GetEnv.h
#ifndef QT_GET_ENV_H
#define QT_GET_ENV_H

#ifdef Q_QT_VERSION 

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0) // using Qt (6 or higher version is recommended)

#include <QtGlobal>
#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QRegularExpression>

namespace j2
{
    namespace Qt6
    {

        ///
        /// \brief Get path list of OS
        /// \return path list of OS
        ///
        QStringList GetOSPath();

    } // namespace Qt6

} // namespace j2

#endif // #if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0) 

#endif // #ifdef Q_QT_VERSION

#endif // #ifndef QT_GET_ENV_H
