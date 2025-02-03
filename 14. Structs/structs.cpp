// to learn more about structure
//https://www.geeksforgeeks.org/structures-in-cpp/
#include<iostream>

using namespace std;
// A Structure is a User defined Type where we can store values of different datatypes together into a single unit
struct User{
    const int id ;
    const char* name ; //Here the value of the name can be changed and the const is for the pointer So that it should only point to this reference
    const char* email ; // same for this as well like name the pointer will point to the reference of that memory and doesnt change its reference
    const int course_count;

    void UserInfo() //In Structure we can declare a member functions as well
    {
        cout<<"User ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Course Count: "<<course_count<<endl;
        cout<<endl; //for better readability in console output
    }
};

int main(){
  
    //creating a User object
    User user1 = {1, "John Doe", "johndoe@example.com", 3};//This is how you provide values to a structure
     User user2 = {2, "Humaid Ahmed", "humaid@example.com", 2};
     cout<<"BREAK_____________________"<<endl;
     cout<<user1.email<<endl; //Using dot operator we can access the value of a variable declared inside a Structure
     cout<<user2.email<<endl;
     cout<<"BREAK_____________________"<<endl;
     user1.UserInfo();  // calling the UserInfo function of user1 object
     user2.UserInfo();

    //We can Create a Pointer of Sturucture
    User *user = &user1; //This pointer is pointing to the value of the Struct variable user 1
    cout<<"User Id:"<<user->id<<endl; // To Access the value of user1 via a user pointer we need to use -> operator
    cout<<"Name :"<<user->name<<endl;
    cout<<"Email:"<<user->email<<endl;
    cout<<"Courses :"<<user->course_count<<endl;

    //Say If I make a change in any value of via user pointer, it will reflect on the user1 structure as well
    cout<<"Email value of user1 before:"<<user1.email<<endl;
    user->email ="Humaid@gmail.com";
    cout<<"Email value of user1 after changing its value via user pointer: "<<user1.email<<endl;

    
cout<<"BREAK_____________________"<<endl;
    
    // Declare an array of 3 User objects
    User users[3] = {
        {1, "Nabeela", "nabeela@gmail.com", 2},
        {2, "John Doe", "johndoe@example.com", 3},
        {3, "Humaid Ahmed", "humaid@example.com", 2}
    };

    // Accessing and displaying information for each user in the array
    for (int i = 0; i < 3; i++) {
        users[i].UserInfo();  // Call UserInfo() for each User
    }
cout<<"BREAK_____________________"<<endl;
    User arr[5] = {
        {1, "Nabeela", "nabeela@gmail.com", 2},
        {2, "John Doe", "johndoe@example.com", 3},
        {3, "Humaid Ahmed", "humaid@example.com", 2},
        {4, "Jane Doe", "janedoe@example.com", 1},
        {5, "Mark Smith", "marksmith@example.com", 4}
    }; // Array of 5 users
     for (int i = 0; i < 5; i++) {
        arr[i].UserInfo();  // Call UserInfo() for each User
    }

   

    return 0;

}