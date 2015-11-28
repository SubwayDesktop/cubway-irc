#include "irc.h"


QObject* Module::createConnection(QVariantMap options){
  IrcConnection *conn = new IrcConnection();
  if(options.contains("port"))
    conn->setPort(options["port"].toInt());
  if(options.contains("reconnectDelay"))
    conn->setReconnectDelay(options["reconnectDelay"].toInt());
  conn->setHost(options["host"].toString());
  conn->setPassword(options["password"].toString());
  conn->setRealName(options["realName"].toString());
  conn->setSecure(options["secure"].toBool());
  conn->setUserName(options["userName"].toString());
  conn->setNickName(options["nickName"].toString());
  return conn;
}



