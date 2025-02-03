#include<iostream>
using namespace std;

/*Array is collection of the memory addresses where in each memory address a value is stored and 
to access an array element in an Array we need to use square bracket and add the array element position in the 
square bracket*/

int main(){
    int numbers [4] = {5,9,8,7}; //This is how you Declare and initialize value in an Array
    cout<<numbers<<endl;//When we try to print an array like this it will print the reference or the memory address of the first Array element
    cout<<numbers[0]<<endl; // This is how you  access the individual array elements in an Array and Array index value starts from zero
    numbers[2] = 88;
    cout<<numbers[2]<<endl; //This will print the updated value of the third array element which is 88
    cout<<&numbers[0]<<endl; //This will print the memory address of the first array element.
    int *ap = numbers;
    cout<<"Pointers value: "<<ap<<endl; //This *ap pointers contains the memory address of the first Array element
    cout<<"We can get the value of the first Array element via pointer using dereferencing:"<<*ap<<endl; 

    /*
    Like the example above, we can access the first element of an array using pointer 
    . When we declare a pointer and intialize it with array, It will point to the first
    array element memory address by default.
    */

   /*
   we can even traverse all through the array element via pointers. for example
   if I want to get the second element in an array we need to increment the pointer value by 1.
   Likewise, we can traverse the array element back and forth using increment or decrement operators
   */
  ap++;
  cout<<"Second element: "<<*ap<<endl;
  ap++;
  cout<<"Third element: "<<*ap<<endl;
  ap--;
  cout<<"Second element: "<<*ap<<endl;
  ap--;
  cout<<"First element: "<<*ap<<endl;
  ap++;
  ap++;
  ap++;
  cout<<"Fourth element: "<<*ap<<endl; //This will print the 4th element in the array.
    return 0;

}