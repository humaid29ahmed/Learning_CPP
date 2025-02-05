#include<iostream>
using namespace std;

void swap (int& a, int& b)
{
    //Move semantics just move the rvalue to another variable more like moving one data to another variable instead of copying the data from one 
    //variable to another variable which saves up the memory.

    int temp;
    temp = move(a);
    a=move(b);
    b=move(temp);
}

string printMe()
{
    return "I am a String";
}
int main()
{
    //int a = 4 here the a is lvalue and 4 is the rvalue
    int num1, num2;

    cout<<"Enter two numbers : ";

    cin>>num1>>num2;
    
    cout <<"\n a: "<<num1<<" , b: "<<num2<<endl;

    swap(num1,num2);

    string s = printMe(); // It holds the copy of the data
    cout<<sizeof(s)<<endl;

    string&& ss = printMe(); // It directly stores the data in the memory of ss variable
    cout<<sizeof(ss)<<endl;

    cout <<"\n a: "<<num1<<" , b: "<<num2<<endl;

    return 0;
}