#include<iostream>
#include<vector>

using namespace std;
/*
 Vector is a dynamic array which are resizeable where you can add and remove element whereas you cannot resize an array
 nor you can add or delete the data in an array.

 for more info about vectors checkout : https://www.w3schools.com/cpp/cpp_vectors.asp
*/


struct Corners
{
    int a,b,c,d;
};

ostream& operator<<(ostream& stream, const Corners& corner)
{
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
    return stream;
}

int main()
{
    vector<int> numbers;  // declaring an vector variable name numbers of type int 

    numbers.push_back(2);// push elements one by one using push_back()
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(8);

    for(auto i = numbers.begin(); i != numbers.end(); ++i) //looping the elements using for loop using begin and end function 
    {                                                      //and i always gets the reference of the value in the vectors
        cout<<*i<<endl;
    }
    
    vector<Corners> corners; //Declaring vector name corners of user-defined type Corners which is a structure

    corners.push_back({1,2,3,4}); // This is the way you can push a value in a vector of user-defined type Corners
    corners.push_back({4,5,6,7});

    for(int i = 0; i<corners.size(); i++) //looping using size() function which provides the length of a vector 
    {                                     //that you want to loop
        cout<<corners[i]<<endl;
    }


    
    return 0;
}