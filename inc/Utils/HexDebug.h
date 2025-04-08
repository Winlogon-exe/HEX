#ifndef  DEBUG_H
#define  DEBUG_H

#include <QDebug>

namespace Log {

    enum class Type {
        SYSTEM,
        DEBUG,
        ERROR,
        INFO
    };

    class Debug {
    public:
        static void debug(const QString& msg) { print(msg,Type::DEBUG); };
        static void info(const QString& msg)  { print(msg,Type::INFO);  };
        static void system(const QString& msg){ print(msg,Type::SYSTEM);};
        static void error(const QString& msg) { print(msg,Type::ERROR); };
        static void print(const QString& msg,Type type);

    private:
        static QString getPrefix(Type type);
        static QString getColorCode(Type type);
    };

    #define SR_DEBUG(...) Log::Debug::debug(__VA_ARGS__)
    #define SR_INFO(...) Log::Debug::info(__VA_ARGS__)
    #define SR_SYSTEM(...) Log::Debug::system(__VA_ARGS__)
    #define SR_ERROR(...) Log::Debug::error(__VA_ARGS__)
}

#endif //DEBUG_H