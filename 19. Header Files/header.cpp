#include<iostream>
#include "adder.h" //Contains both addition functions
using namespace std;

// int addition(int a, int b)
// {
//     return a+b;
// }

// float addition(float a, float b)
// {
//     return a+b;
// }

/*
 If we want to reduce the code size for readabilty or declare various function into different part and use it 
 than we can do that by creating or own header files
*/
int main()
{
    int a=3,b=4;
    float num1=3.56, num2=456.56;

    int result  = addition(a,b);
    cout<<"The  addition value is:"<<result<<endl;

    float value = addition(num1,num2);
    cout<<"The addition of Float value is:"<<value;
    return 0;
}