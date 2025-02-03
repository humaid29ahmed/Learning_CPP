#include<iostream>
using namespace std;

void updateValue(int *val) //
{
     ++(*val);
}

void updateValueByReference(int &val) // It directly gets the reference of value of Variable life and make changes in the life value
{
    ++val;
}

int main()
{
    int life = 3;
    updateValue(&life); // Here we are sending reference of the variable life to the pointer variable 'val' in the updateValue()
    cout<<life<<endl;   //It changes value of variable life in main()
    updateValue(&life);
    cout<<life<<endl;
    updateValueByReference(life);//Here,we sent the value of variable life which contains the value and the reference
    cout<<life<<endl;
    updateValueByReference(life);//Here,we sent the value of variable life which contains the value and the reference
    cout<<life<<endl;

    return 0;
}