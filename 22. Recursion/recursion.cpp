#include<iostream>
using namespace std;
//A function that call itself with an exit strategy or condition is called recursion
int factorial (int n);

int main()
{
    int num;

    cout<<"Enter a Value: ";
    cin>>num;

    int result = factorial(num);

    cout<<"\nThe factorial for "<<num<<" is "<<result<<endl;
    return 0;
}

int factorial(int n)
{
    if(n > 1)
    {
        return n* factorial(n-1);
    }else{

        return 1;
    }
}