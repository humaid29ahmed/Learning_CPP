#include<iostream>
using namespace std;

int main(){
    // A string or char array always an end character as 0 at the end of an array

    char name[] = "Humaid";

    //first way of looping a char array
    for(int i = 0 ; name[i]!=0 ;i++) cout<<"Character at "<<i<<" position is "<<name[i]<<endl;

    cout<< "end of Looping 1"<<endl;

    //Second way of Looping a char array using pointers

    for(char *cp = name; *cp; cp++) cout<<"Character is "<<*cp<<endl;

    cout<< "end of Looping 2"<<endl;

    //Third way of Looping a char Array using range based for loop

    for(char ch : name)
    {
        if(ch == 0) break;
        cout<<"Character is "<<ch<<endl;
    }
    cout<< "end of Looping 3"<<endl;

    return 0;
}