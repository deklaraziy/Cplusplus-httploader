#ifndef LOADCAPTION_H
#define LOADCAPTION_H

#include <QObject>

class LoadCaption
{
public:
    LoadCaption();
    ~LoadCaption();
private:
    QString FileName;
    QUrl UrlFile;
    QString HashSum;
    QString HashType;
};

#endif // LOADCAPTION_H
