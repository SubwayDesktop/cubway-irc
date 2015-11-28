#ifndef _MODULES_IRC_H
#define _MODULES_IRC_H

#include <QtCore>
#include <IrcCore>
#include <QVariantMap>

class Module: public QObject
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.subway.Cubway.IRC")
    public:
    Q_INVOKABLE QObject* createConnection(QVariantMap options);
};

#endif //_MODULES_IRC_H
