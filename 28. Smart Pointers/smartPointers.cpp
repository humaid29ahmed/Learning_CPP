#include<iostream>
#include<string>
#include<memory> // header file to use smart pointers
using namespace std;

/*
 Smart Pointers is the Newest addition in the Modern CPP. Where it will
 automatically handles the allocation and deallocation of a memory whereas,
 In the past whenever we explicitly create a memory using new keyword, we need
 to use delete keyword to free up the memory. To solve this thing was intoduced 
 in modern CPP.

 There are various smart Pointers

 Unique Pointers - Memory gets freed as soon as the scope ends.
                   You cannnot copy this pointer to prevent memory 
                   leaks.

 Shared Pointers - Exactly like Unique pointers with one exception
                   where , you can copy the reference of the another
                   shared pointer.

 Weak Pointers   - Here the pointer only takes the reference but does not 
                   create a memory in the stack
*/

class User
{
   public:
         User()
         {
            cout<<"User has been Created!\n";
         }

         void testFunction()
         {
            cout<<"Pointer is able to access this method!\n";
         }

         ~User()
         {
            cout<<"User object has been destroyed!\n";
         }
};

int main()
{
    {
        unique_ptr<User> hum = make_unique<User>(); // This is how you create a unique pointer of type class User.

        //Other pointers cannot copy the unique pointer
        // like 'unique_ptr<User> hello = hum;' This is not possible and not allowed.

        hum->testFunction(); //calling the function via unique pointer
    }

    {
        // shared_ptr<User> sam(new User()); This is also a valid way to use a smart pointer but it not recommended because of memory consumption
        // sam->testFunction();
        shared_ptr<User> hum = shared_ptr<User>(); // This is how shared pointer is declared
        weak_ptr<User> weak = hum; // It just has the reference of the memory address of the shared pointer.
        shared_ptr<User> timm = hum; //here you can copy the unique pointer and point to the same memory address has of hum pointer

        timm->testFunction();//calling the function via shared pointer

        hum->testFunction();//calling the function via shared pointer
    }
    return 0;
}