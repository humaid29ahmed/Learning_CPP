#include<iostream>
using namespace std;

class Money{  // This class has been created to implement multiple inheritance
    public:

        void gotMoney()
        {
            cout<<"Yes I have 500 rupees rupees with me !"<<endl;
        }

};


class Man{
    string _name;
    int _age;
    Man(){} // It is private so that object creation should invoke the Default Constructor

    friend class Spiderman; //This friend keyword is used to make private members accessible to other classess

    friend class Superman;  //But it is considered to be a bad practise instead use getter and setter method to access private members of a class
    public:
       void sayMyName() const 
       {
        cout<<"Your name is "<<_name<<endl;
       }
    protected:

        Man(const string& name, const int& age): _name(name), _age(age){}
        
        void run()
        {
            cout<<"I can run!"<<endl;
        }
};

class Superman : public Man, public Money // This how you can Inherit multiple classes and this is called Multiple Inheritance
{
    bool flight;

    public:
           
           Superman(string name): Man(name, 26){}
           void run()
           {
              cout<<"I can run at a lightning speed! "<<_age<<endl;
           }



};

class Spiderman : public Man
{
    bool webbing;

    public:
            Spiderman(string name): Man(name, 21){} // Spiderman constructor is accessing the Man constructor
           void run()
           {
              cout<<"I can run at a normal speed! "<<_age<<endl;
           }
};

int main()
{
    Spiderman spidy("Peter Parker");

    spidy.sayMyName();
    spidy.run();

    Superman supy("Clark Kent");

    supy.sayMyName();
    supy.run();
    supy.gotMoney(); // This calls the Money Class method callled gotMoney() due to multiple inheritance


 return 0;
}