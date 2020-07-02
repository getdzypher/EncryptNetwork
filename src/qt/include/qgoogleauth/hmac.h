#ifndef HMAC_H
#define HMAC_H

#include <QObject>

class HMAC : public QObject
{
    Q_OBJECT
public:
    explicit HMAC(QObject *parent = 0);
    static QByteArray hmacSha1(QByteArray key, QByteArray baseString);
    
Q_SIGNALS:
    
public Q_SLOTS:
    
};

#endif // HMAC_H
