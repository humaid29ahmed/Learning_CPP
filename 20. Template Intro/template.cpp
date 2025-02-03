/*
 Template is the generic data type for doing
 generic works life we need to add two numbers
 but since it work for all data type for that
 we need to create same addition function for 
 all the datatype to make code work, but this 
 could your program very length. Instead, we 
 can create template generic datatype.
*/

#include<iostream>
#include<string>
#include <typeinfo>
using namespace std;

template <typename T>

T addition(T a, T b)
{
   return a+b;
}

int main()
{
    int a=3,b=4;
    float num1=3.56, num2=456.56;

    int result  = addition(a,b);
    cout<<"The  addition value is:"<<result<<endl;

    float value = addition(num1,num2);
    cout<<"The addition of Float value is:"<<value<<endl;

    return 0;
}