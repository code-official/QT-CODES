#include <QCoreApplication>
#include <QDebug>

void test()
{
    qInfo() << "Hello wold test1";
}


void test2()
{
    qInfo() << "test2";
    test();
}


int calc(int offset, int age) {
    int x = offset * age;
    qInfo() << "Calc:" << x;
    return x;
}

int catYears(int age) {
    qInfo() << "cat years";
    return calc(4,age);
}

int dogYears(int age) {
    qInfo() << "dog years";
    return calc(6,age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test2();

    int age = 0;
    qInfo() << "Enter age:";
    cin >> age;
    qInfo() << "age" << age;

    int value = calc(5,age);
    qInfo() << "Double:" << value;

    qInfo() << "Cat years:" << catYears(age);
    qInfo() << "Dog years:" << dogYears(age);

    return a.exec();
}



