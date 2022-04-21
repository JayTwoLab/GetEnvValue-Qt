// GetEnv.h
#ifndef QT_GET_ENV_H
#define QT_GET_ENV_H

#include <QtGlobal>
#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QRegularExpression>

namespace QtGetEnv
{

///
/// \brief Get path list of OS
/// \return path list of OS
///
QStringList GetOSPath();

}

#endif
