#include <QCoreApplication>
#include <QDebug>



struct product
{
    int weight;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool Switch = false;

    qInfo() << "Offf" << LightSwitch;

    Switch = true;
    qInfo() << "ON" << LightSwitch;

    int age = 30;
    double height = 900.12;

    qInfo() << "age" << age;
    qInfo() << "hei" << height;
    
    //chagablee not as const is here
    const int id = 655;

    //enum
    enum Coloe{red,green,blue}
    Color myColor=Color::green;

   

    qInfo() << "colour" << myColor;


    //  struct

    laptop.color = Colors::gree;
    laptop.value = 8.54;
    laptop.weight = 89;

    qInfo() << "Weight:" << laptop.weight;
    qInfo() << "Value:" << laptop.value;
    qInfo() << "Color:" << laptop.color


    return a.exec();
}