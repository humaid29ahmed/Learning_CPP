#include<iostream>
using namespace std;
//Pointers are used to point to the references of the variable or memory addresses of a variable;
int main(){
    int number;
    number = 40;
    int value = 45;
    int *myValue = &value;
    int *myNumber; // declaring a pointer, the pointer variable always starts with the prefix "*"
    myNumber = &number; // //memory address of the variable number is getting stored in the pointer variable myNumber

    number = *myNumber; // dereferencing a pointer
    cout<<"The pointer dereferenced value: "<<number<<endl;
    cout<<"The pointer value: "<<myNumber<<endl;
    cout<<"The pointer value: "<<*myValue<<endl;
    cout<<"The reference value: "<<&value;
    return 0;
}