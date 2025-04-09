#include <QApplication>
#include "Utils/HexDebug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HEX_DEBUG("TEST");
    HEX_ERROR("TEST");
    HEX_INFO("TEST");
    HEX_SYSTEM("TEST");
    HEX_SYSTEM("TEST");
    
    return a.exec();
}
