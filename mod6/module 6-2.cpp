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

    if(age > 18) {
        qInfo() << "adut";
    } else if(age < 12) {
        qInfo() << "child";
    } else {
        qInfo() << "kid";
    }

    return a.exec();
}
