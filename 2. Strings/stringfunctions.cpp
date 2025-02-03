#include<iostream>
#include<string> // for using string methods

using namespace std;

int main()
{
    string firstName, lastName; // string variable declarations
    cout<<"First Name: ";
    getline(cin,firstName); // getline(cin, string variable name) is used to take string input from the terminal
    cout<<"Last Name: ";
    getline(cin,lastName);

    cout<<"Welcome, "<<firstName<<" "<<lastName<<" "<<firstName[0]<<lastName[0];
    return 0;
}