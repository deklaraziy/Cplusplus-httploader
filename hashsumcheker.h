#ifndef HASHSUMCHEKER_H
#define HASHSUMCHEKER_H

#include <QObject>

class HashSumCheker
{
public:
    HashSumCheker();
    ~HashSumCheker();
    QString ChekHash(QString *HashSum, QString *HashType, QString *FileName);
private:
    void SelectHashType(QString *HashType);
    void Cheksha1();
    void Cheksha256();
    void Chekmd5();
    QString HashSum;
    QString HashType;
    QString FileName;
};

#endif // HASHSUMCHEKER_H
