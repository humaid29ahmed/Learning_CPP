#include<iostream>
using namespace std;
/*
 Class is a blueprint for an object.

 The default access specifier is private for a class in C++.

 We can Access private data members and methods in a class directly.
*/


class User{
    int secret = 44;

    public:
           string name = "default"; // default value for name
           void displayMessage()
           {
            cout<<"You have called User class, "<<name<<endl;
           } 
 
        //    void setSecret(const int &updateSecret) // It is a setter function which helps to set any private data members with a new data
        //    {
        //     secret = updateSecret;
        //    }

        void setSecret(const int &updateSecret); // we can declare the body of the function outside the class as well
           //Const methods are not allowed to set any variable, it is only allowed return a data or print it
           //A const method is accessable to all const and 
           //non-const qualified object but normal method is only allowed to non-const qualified object
           int getSecret()const // It is getter function which helps in getting the private data member values
           {
            return secret;
           }

};   // class should always end with a semicoln

void User::setSecret(const int &updateSecret) // We can declare a function for class User outside the class by using classname 'User' and Scope Resolution Operator '::'.
{
    secret = updateSecret;
}

int main()
{
    User sam;
    sam.name = "Sam";
    sam.displayMessage();
    sam.setSecret(333);
    printf("The secret value of sam is %d\n", sam.getSecret());

    User humaid;
    humaid.name = "Humaid Ahmed";
    humaid.displayMessage();

    const User phil; //const object
    printf("The secret number of phil is %d\n",phil.getSecret());

    return 0;

}