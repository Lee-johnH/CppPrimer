#include <iostream>
#include <string>
using namespace std;

class MyException
{
private:
    string message_;
public:
    MyException(const char* message):message_(message)
    {
        cout<<"MyException..."<<endl;
    }

    ~MyException()
    {
        cout<<"~MyException..."<<endl;
    }

    MyException(const MyException& other):message_(other.message_)
    {
        cout<<"Copy MyException..."<<endl;
    }

    const char* what() const
    {
        return message_.c_str();
    }

};

double Divide(double a, double b)
{
    if(b == 0.0)
        throw MyException("divisiong by zero");

    return a/b;
}

int main(void)
{
    try
    {
        cout<<Divide(5.0, 0.0)<<endl;
    }
    catch(MyException& e)
    {
        cout<<e.what()<<endl;
    }


    return 0;
}
