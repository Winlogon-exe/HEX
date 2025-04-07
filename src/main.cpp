#include <QApplication>
#include "debug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Log::Debug::logMessage("debug",Log::Debug::Type::DEBUG);
    Log::Debug::logMessage("system",Log::Debug::Type::SYSTEM);
    Log::Debug::logMessage("info",Log::Debug::Type::INFO);
    Log::Debug::logMessage("error",Log::Debug::Type::ERROR);
    return a.exec();
}
