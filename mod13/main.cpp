#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDiv(int max)
{
    try
    {
       
        int value;
        qInfo() << "Enter a number";
        cin >> value;

        if(value == 0) throw QString("not divide by zero");
        if(value > 5) throw 99;
        if(value == 1) throw std::runtime_error("value>1");

        int result = max / value;
        qInfo() << "Result = " << result;
    }
    catch (std::exception const& e)
    {
        qWarning() << "exception" << e.what();
        return false;
    }
    catch (QString e)
    {
        qWarning() << "qstring" << e;
        return false;
    }
    catch (int e)
    {
        qWarning() << "int" << e;
        return false;
    }
    catch (...)
    {
        
        qWarning() << "error in code";
        return false;
    }



    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do
    {
        //statment loop
    }while(doDiv(max));

    return a.exec();
}
