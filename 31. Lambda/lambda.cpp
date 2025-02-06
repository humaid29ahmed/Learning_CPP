#include<iostream>
using namespace std;

int main()
{/* 
 This is a lambda function which prints the statement and automatically assigns the return type
 and the paranthesis '()' should be at the end when you dont want the lamda function to accepts anything
 from the other function. It useful because it doesnt take the memory, it just uses as along as it requires
 and the work is done it is freed from the memory.
*/
    []{cout<<"Hello, I am Lambda"<<endl;}(); // lambda function which doesnt take any value

    int number = [](int a, int b ){ return a+b;};// lamdda function which takes value of any type due to auto keyword and return the value 

    cout<<number(15,20);
    return 0;
}