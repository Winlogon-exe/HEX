#ifndef  DEBUG_H
#define  DEBUG_H

#include <QDebug>

namespace Log {

    class Debug {
    public:
        enum class Type {
            SYSTEM,
            DEBUG,
            ERROR,
            INFO
        };

    public:
        void static logMessage(const QString& message,Type type);
    
    private:
        QString static getPrefix(Type type);
        QString static getColorCode(Type type);
        void static fillMap();

    private:
        //static std::map<QString,QString> prefixColor;
    };
}

#endif //DEBUG_H