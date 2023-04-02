#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 0;
    qInfo() << "max";
    cin >> max;

    if(max <= 0) qFatal("no valid ");

    for(int i = 0 ; i < max  ; i++) {
        qInfo() << "i = " << i;
    }

    array<int,4> ages = {44,58,32,14};
    for(int i = 0;i < ages.size();i++) {
        qInfo()  << ages.at(i);
    }

    return a.exec();
}
