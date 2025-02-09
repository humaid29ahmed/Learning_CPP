#include<iostream>
using namespace std;

class Float
{
    float fl;

    public:

        Float()
        {
            fl = 0.1;
        }

        void operator () (float val) //Operator Overloading paranthesis is called functors. It is widely used for maintaining the state of the value in a class
        {
            fl+=val; 
            cout<<"The addition of float number is "<<fl<<endl;
        }

        void operator << (string sentences) // This is also a Operator Overloading but not a functors.
        {
            cout<<sentences<<endl;
        }
};
int main()
{
    Float flo; // Created an Object of Class Float

    flo(2.3); //Providing value to functors
    flo(3.6); //Providing value to functors
    flo(5); //Providing value to functors
    flo<<"Hello World"; //Providing value to void operator << (string sentences) by overloading << operator
    return 0;
}