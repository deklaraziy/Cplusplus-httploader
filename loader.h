#ifndef LOADER_H
#define LOADER_H

#include <QObject>

class Loader
{
public:
    Loader();
    ~Loader();
    bool StartLoad(QUrl *Adress, QString *FileName);
private:
    bool SaveBlock();
};

#endif // LOADER_H
