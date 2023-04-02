#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter age";
    cin >> age;

    if(age == 0) qFatal("no valid");

    qInfo() << age;

    if(age < 18)
    {
        qInfo() << "adult";
        qInfo() << "Child";
    }
  //condition of qinfo

    if(age < 21 && age >= 18) qInfo() << "child";

    if(age >= 21) qInfo() <<  "adult";

    if(age > 200) qCritical() <<  "not right vamp";

    qInfo() << "Done";

    return a.exec();
}
