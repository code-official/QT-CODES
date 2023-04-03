#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   
    //Explicit conversion

    double value = 5.75;
    qInfo() << "Double: " << value;

    int age = value;
    qInfo() << "Age: " << age; 

    age = (int)value;
    qInfo() << "Age: " << age; 

    return a.exec();
}
