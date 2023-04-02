#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal fish;

    cat.setObjectName("Kitty");
    dog.setObjectName("Fido");
    fish.setObjectName("Fish");

    cat.speak("mow");
    dog.speak("bhau");
    fish.speak("biub");

    return a.exec();
}
