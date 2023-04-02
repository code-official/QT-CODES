#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string name;
    int age;

    cout << "Enter your nae:" << endl;
    cin >> name;

    cout << "Enter your agee:" << endl;
    cin >> age;

    qInfo() << name << "and" << age ;

    return a.exec();
}
