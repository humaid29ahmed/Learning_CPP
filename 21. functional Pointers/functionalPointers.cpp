#include<iostream>
using namespace std;
/*A functional pointer stores a reference of a function
It is also used to pass a function  to another function*/
void interesting()
{
    puts("I am Interesting!!");
}

int multiply(int a, int b)
{
    return a*b;
}
int add(int a, int b)
{
    return a+b;
}

void Print(int (*funcptr)(int,int))
{
    cout<<"The function ptr value is: "<<funcptr(5,4)<<endl;
}
int main()
{
    void (*functionalPointer)() = interesting; //Create a function pointer which points to function interesting

    functionalPointer();// calling interesting function via functional pointer

    int (*addTwoNumbers)(int,int) = add; //Created a function pointer addTwoNumbers which points function add which accepts two integer values
   
    cout<<addTwoNumbers<<endl;
   
    int result = addTwoNumbers(3,4) ; //Calling the add fn via functional pointer called addTwoNumbers with two integer values
   
    cout<<"The result: "<<result<<endl; //prints the result
    
    Print(multiply); // sending a function to another function via functional pointer
   
    return 0;
}