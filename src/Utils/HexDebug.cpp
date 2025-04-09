#include "Utils/HexDebug.h"

void Utils::Debug::print(const QString &msg, Type type)
{
    QString color = getColorCode(type);
    QString prefix = getPrefix(type);
    qDebug().noquote().nospace() << "\033[" << color << prefix << "\033[0m" << msg;
}

QString Utils::Debug::getPrefix(Type log)
{
    switch (log)
    {
        case Type::SYSTEM: return "[SYSTEM]";
        case Type::DEBUG:  return "[DEBUG]";
        case Type::ERROR:  return "[ERROR]";  
        case Type::INFO:   return "[INFO]";
    }
    return "[log]";
}

QString Utils::Debug::getColorCode(Type type)
{
    switch (type)
    {
        case Type::SYSTEM: return "1;34m";
        case Type::DEBUG:  return "0;37m";
        case Type::ERROR:  return "1;31m";
        case Type::INFO:   return "0;36m";
    }
    return "0";
}
