# GetEnvValue-Qt

- Get environment value in Qt

## namespace 

- QtGetEnv

## GetOSPath()

- example code

```cpp
// main.cpp

#include <QCoreApplication>
#include <QDebug>

#include "GetEnv.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList pathList = QtGetEnv::GetOSPath();
    foreach (QString pathName, pathList)
    {
        qDebug() << pathName;
    }

    return 0; 
}
```
