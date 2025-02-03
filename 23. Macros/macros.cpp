#include<iostream>
using namespace std;
/*This is how you create a macros*/
#define end return 0
#define console_log(a) cout<<"The value is "<<a<<endl


int main()
{
    console_log(55);
    end;
}