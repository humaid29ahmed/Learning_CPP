#include<iostream>
using namespace std;

/*
WORKING 

1) printValue(1,2,3,4,4.5,6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=1, args= 2,3,4,4.5,6.6,"Hello" prints t value.
   and call printValue(args..)

2) printValue(2,3,4,4.5,6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=2, args= 3,4,4.5,6.6,"Hello" prints t value.
   and call printValue(args..)

3)  printValue(3,4,4.5,6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=3, args= 4,4.5,6.6,"Hello" prints t value.
   and call printValue(args..)

4)  printValue(4,4.5,6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=4, args= 4.5,6.6,"Hello" prints t value.
   and call printValue(args..)

5)  printValue(4.5,6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=4.5, args= 6.6,"Hello" prints t value.
   and call printValue(args..)

6)  printValue(6.6,"Hello"); send all the values to the printValue func 
   .In printValue(T t, Args... args) t=6.6, args= "Hello" prints t value.
   and call printValue(args..)

7)  printValue("Hello"); send the value to this printValue function
    template<typename T>
    void printValue(T t)
    {
       cout<<"Hello "<<t<<endl;
    }

    because when there are no args remain has an exit strategy of template
    it sends the single to a function which takes one parameter.
    
*/

template<typename T>
void printValue(T t)
{
    cout<<"Hello "<<t<<endl;
}

template<typename T, typename... Args>
void printValue(T t, Args... args)
{
    cout<<t<<endl;
    printValue(args...);
}

int main()
{
    int a =4, b= 6;

    printValue(1,2,3,4,4.5,6.6,"Hello");

    

    return 0;
}