#ifndef  DEBUG_H
#define  DEBUG_H

#include <QDebug>
#include <Core/Macros.h>

namespace Utils {

    enum class Type : uint8_t {
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
        HEX_NODISCARD static QString getPrefix(Type type);
        static QString getColorCode(Type type);
    };

    #define HEX_DEBUG(...) Utils::Debug::debug(__VA_ARGS__)
    #define HEX_INFO(...) Utils::Debug::info(__VA_ARGS__)
    #define HEX_SYSTEM(...) Utils::Debug::system(__VA_ARGS__)
    #define HEX_ERROR(...) Utils::Debug::error(__VA_ARGS__)
}

#endif //DEBUG_H