#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age:";
    cin >> age;

    switch(age) {
    case 0:
        qFatal("You did not enter a valid age");
        break;
    case 16:
        qInfo() << "can drive";
        break;
    case 18:
        qInfo() << "can vote";
        break;
    case 21:
        qInfo() << "Can drink";
        break;
    case 67:
        qInfo() << "Can retire";
        break;
    default:
        qInfo() << "default val";
        break;
    }

    qInfo() << "Done";


    return a.exec();
}
