#include<iostream>
using namespace std;

class One{

    public:
        /*
         The 'virtual' keyword is used to override the base class
         methods which has been created with a same name that 
         exist in the derived classes. calling the derived class method
         by creating a base class pointer object which takes the reference
         of the derived class object. So,  when we call the derived class method with
         a same name has a base class method using '->' operator we end up invoking
         a base class method. So, to solve this issue we need to use virtual keyword
         in the base class. So that it invokes derived class method with a same name 
         has a base class method.
        */
        virtual void  message() 
        {
            cout<<"I am Class One\n";
        }
};

class Two : public One
{

    public:
        void message()
        {
            cout<<"I am Class Two\n";
        }
};

class Three : public One
{

    public:
        void message()
        {
            cout<<"I am Class Three\n";
        }
};

int main()
{
    One *a; //It is a pointer object of class one
    Two b;
    Three c;
   
    a = &b;// The pointer object is taking the reference of the derieved class Two
    a->message(); // This will print the default or first message() function in Class One

    a = &c; // The pointer object is taking the reference of the derieved class Two
    a->message(); // This will print the default or first message() function in Class One

    /*
      For this ambiguity we need to use 'virtual' keyword in the  Class One message function, 
      so that the Class One message() should not get invoked when we are trying 
      to get the message() functions of Class Two and Three
    */


    

    return 0;
}
