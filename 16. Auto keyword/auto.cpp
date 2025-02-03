#include<iostream>
#include<string>
using namespace std;
// auto is a keyword which defines a datatype based on the value of the variable
// It is used when you dont know the type of the value you might get from somewhere like functions etc...

string stringValue()
{
    return "Hello World";
}

int intValue(){
    return 10+10;
}
int main()
{
    auto value1 = stringValue(); //It automatically assign a String data type
    auto value2 = intValue(); // It automatically assign a Int data type
    value2 =40;  
     // This thing is not allowed, here if the value2 is already assigned with a certain value it cannot be reassigned with a value of different type
     //same type will work fine
    cout<<"The auto value1 value is "<<value1<<endl;
    cout<<"The auto value2 value is "<<value2<<endl;
    if(typeid(value1)==typeid(string)) 
    {
        /* This if statement checks if both type and the condition is true, 
           which proofs that auto assigns proper type according to the value*/
        puts("Both Types are the same");
    }
    return 0;
}