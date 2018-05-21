#include <iostream>
#include <string>
using namespace std;

class MyException
{
public:
    MyException(const char *message):message_(message)
    {
        cout<<"MyException..."<<endl;
    }

    MyException(const MyException& other):message_(other.message_)
    {
        cout<<"Copy MyException..."<<endl;
    }

    ~MyException()
    {
        cout<<"~MyException"<<endl;
    }

    const char* what() const
    {
        return message_.c_str();
    }

private:
    string message_;
};

double Divide(double a, double b)
{
    if(b == 0.0)
    {
        MyException e("divisiong by zero");
        throw e;
    }
    else
        return a/b;
}

int main(int argc, char *argv[])
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
