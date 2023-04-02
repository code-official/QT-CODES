#include <QCoreApplication>
#include <QDebug>

void test(QString value) //Stack - COPY
{
    qInfo() << &value << "size" << value.length();
} 
void testPtr(QString *value)
{
    qInfo() << "P" << value << "Siz" << value->length();
    qInfo() << "A" << &value << "Size" << value->length();
}

void wow()
{
    //memory manage
    std::unique_ptr<Test> t(new Test());
    t->doStuff();

    
}
 

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Dheeraj"; //Stack
    qInfo() << &name << "Size:" << name.length();

    test(name);
    testPtr(&name);

    qInfo() << "Start";
    wow();
    qInfo() << "Finish";

    return a.exec();
}
