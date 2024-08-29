# GetEnvValue-Qt

- Get environment value using Qt

- C++ 17 or higher version 

## namespace 

- ```j2::Qt6```

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

    QStringList pathList = j2::Qt6::GetOSPath();
    foreach (QString pathName, pathList)
    {
        qDebug() << pathName;
    }

    return 0; 
}
```

## License

- GetEnvValue-Qt is under MIT License. https://github.com/j2doll/GetEnvValue-Qt
- This is a part of j2 library.


