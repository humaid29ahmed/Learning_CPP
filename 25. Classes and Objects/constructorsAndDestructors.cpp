#include<iostream>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

    public:
            Phone();// Default Constructor
            Phone(const string& name, const string& os, const int& price); //Parameterized Constructor
            Phone(const Phone &); //Copy Constructor
            string getName();
            string getOs();
            int getPrice();

            ~Phone() //This is a Destructor, which destroys object one by one based on which object was created at the end
            {
                cout<<"The Destructor has been called for "<<_name<<endl;
            }


};

Phone:: Phone(): _name("Samsung"),_os("Android"),_price(18000)
{ 
    cout<<"Default Constructor has been called!" <<endl;
    
}


Phone:: Phone(const string& name, const string& os, const int& price): _name(name), _os(os), _price(price)
{
    
    puts("\nParameterized Constructor has been called!");

}

Phone:: Phone(const Phone & values)
{
    cout<<"\nCopy constructor has been called !"<<endl;
    _name =values._name+" A1";
    _os = values._os;
    _price = values._price;
}

string Phone::getName()
{
    return _name;
}

string Phone::getOs()
{
    return _os;
}

int Phone::getPrice()
{
 cout<<"the Address of the object is "<<this<<endl; //'this' keyword is a self referencial pointer which points to itself 
 return _price;
}


int main()
{
    Phone samsung;// If you declare an Object It will call a Default Constructor.
    cout<<"The Phone brand: "<<samsung.getName()<<"\n The Phone OS: "<<samsung.getOs()<<"\n The Phone price: "<<samsung.getPrice()<<endl;

    Phone apple("Apple 15 pro", "IOS", 58000);//Declaration of a Parameterized Constructor
    cout<<"The Phone brand: "<<apple.getName()<<"\n The Phone OS: "<<apple.getOs()<<"\n The Phone price: "<<apple.getPrice()<<endl;

    Phone samsungA1 = samsung; // Declaration of a Copy Constructor
    cout<<"The Phone brand: "<<"New "<<samsungA1.getName()<<"\n The Phone OS: "<<samsungA1.getOs()<<"\n The Phone price: "<<samsungA1.getPrice()<<endl;




    return 0;
}