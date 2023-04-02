#include <QCoreApplication>
#include <QDebug>

void test(int number)
{
    //Scope examp
    number = 50;
    qInfo() << "2 - Number: " << &number << " = " << number;
}

void testing()
{
     qInfo() << name;
}

int main(int argc, char *argv[])
{
    
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "1 - Number: " << &number << " = " << number;
    test(number);

    

    qInfo() << "4 - Number: " << &number << " = " << number;


    name = "Bob";
    qInfo() << name;

    bool test = true;
    if(test)
    {
        QString name = "Tammy";
        qInfo() << name;
        qInfo() << ::name;
    }

     qInfo() << name;
     testing();


    return a.exec();
}
