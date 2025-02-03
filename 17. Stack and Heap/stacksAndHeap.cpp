#include<iostream>
using namespace std;

struct User{
    int id;
    int courses;
};

int main(){
    int value = 10;            // |These type of values will we stored in the
    int arr[] ={1,2,3,4,5,6,7};// |stack part of the memory.

    /*If you allocate the memory dynamically then the values or the memory will
    be alloted in the Heap part of the memory. which ones created then it will be 
    mandatory to free the memory using delete operator and this freeing the memory is
    important because this ensures there will be no memory leaks*/

    int *number = new int;    // dynamically allocated int in the heap part of the memory
    *number  = 10;
    
    User *usr = new User();  // dynamically allocated struct in the heap part of the memory
    usr->id = 20;
    usr->courses = 3;

    cout<<"The value is "<<*number<<endl;
    cout<<"The value in the struct is "<<usr->id<<" and "<<usr->courses<<" . "<<endl;
    delete number;          // freeing the memory that the number occupied in the heap
    delete usr;             // freeing the memory that the usr variable has been occupied
    return 0;

}