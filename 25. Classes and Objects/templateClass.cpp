#include<iostream>
using namespace std;

template<class T> //This line is needed to create Template Class
class Arithmetic
{
    T a; // replace 'T' with the datatype and return type with the template class type T which will replaced with the respective data type of the template class object
    T b;

    public:
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    T add()
    {
        T c  = a + b;
        return c;
    }

    T sub()
    {
        T c = b-a;
        return c; 
    }
};

int main()
{
    Arithmetic<int> r(10,20);//Calling template class of type int
    Arithmetic<double> d(59.36, 77.93);//Calling template class of type double
    Arithmetic<char> c('A','B');//Calling template class of type char
    cout<<"Add : "<<r.add()<<endl;
    cout<<"Sub :"<<r.sub();
    cout<<"Add in Double : "<<d.add()<<endl;
    cout<<"Sub in Double :"<<d.sub()<<endl;
    cout<<"Add in Char : "<<(int)c.add()<<endl;
    cout<<"Sub in Char :"<<(int)c.sub();

    return 0;
}