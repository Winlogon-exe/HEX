#include <QApplication>
#include <qserialport.h>
#include "debug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SR_DEBUG("TEST");
    SR_ERROR("TEST");
    SR_INFO("TEST");
    SR_SYSTEM("TEST");
    
    return a.exec();
}
