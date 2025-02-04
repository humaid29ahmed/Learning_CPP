#include<iostream>
using namespace std;

class Rectangle{

    double _length;
    double _breadth;

    public:
        Rectangle(double length = 2.0, double breadth = 2.0)
        {
            _length = length;
            _breadth = breadth;
        }

        double Area()
        {
            return _length * _breadth;
        }

        int compare(Rectangle rectangle)
        {
            /*
             This keyword is a self referencial pointer which points to itself that is 
             it points to its own object's memory address. Here we cannot use this expression
             'return Area() > rectangle.Area()' because there will be a confusion in Area() method
             because it do not understand which Object Area() method am I trying access. But, here I am trying
             to access its own object's method so we need to use 'this' keyword along with arrow '->' and then 
             the method name or the variable name, like this you can access any methods or varaible 
             of the current object created from the main() function.
            */
            return this->Area() > rectangle.Area(); 
        }

};

int main()
{
    Rectangle h1(3.0,3.0);
    Rectangle h2(4.0,4.0);

    if(h1.compare(h2))
    {
        cout<<"h1 area is greater than h2";

    }else{
        cout<<"h2 area is greater than h1";
    }
    return 0;
}