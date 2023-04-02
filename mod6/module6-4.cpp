#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 80;
    int max = 100;

    int i = start;
    while(i < max) {
        qInfo() << "while" << i;
        i++;
    }

    i = start;
    do {
        qInfo() << "Do = " << i;
        i++;
    } while(i < max);

    qInfo() << "Done";

    return a.exec();
}
