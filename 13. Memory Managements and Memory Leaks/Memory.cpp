/*
To learn how memory is divided for a program
like stack, heap, initialized data segment(data), non-initialized data segment(bss),text
https://www.geeksforgeeks.org/memory-layout-of-c-program/

To learn about new and delete operator
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
*/
#include<iostream>
using namespace std;
int main()
{
    int *p = NULL;
    p = new int; // allocated a memory in the heap

    *p = 10; //initialize the memory with a value on the address space

    cout<<"Memory assigned at "<<p<<endl; // print the memory address that was allocated dynamically

    cout<<"Value in that memory address is "<<*p<<endl; // print the value on that dynamically allocated memory address

    delete p; // delete the memory that was allocated dynamically

    /*If we want we can allocate array of memory of any type*/
    
    try// The dynamic memory allocation should happen in the try and catch block to handle error when dynamic memory allocation fails
    {
        int *arr = new int[5]; //allocate memory for five integer values in the heap where the pointer points to first memory address
        cout<<"Memory space allocated!";
        delete[] arr; // delete the array of memory that was allocated dynamically
    }
    catch(...)
    {
        cout<<"Memory space failed to allocate!";
    }
    
    


    return 0;
}