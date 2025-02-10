#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> numbers;

    for(int i = 1; i<=10;i++)
    {
        numbers.push_back(i); // pushing the elements in the list
    }

    for(int i : numbers)
    {
        cout<<i<<" ";
    }

    cout<<"\nNumber at the begining:"<<numbers.front(); // provide the starting number in a list
    cout<<"\nNumber at the end:"<<numbers.back(); // provide last number or element in the list

    numbers.reverse();//This function will work well on built-in datatypes but not in classes ,struct, template and it is used to reverse a list

    cout<<"\nNumbers in reverse order: ";
    for(int i : numbers)
    {
        cout<<i<<" ";
    }

    numbers.sort();// This sort() fn is used the sort the list

    cout<<"\nNumbers after sorting: ";
    for(int i : numbers)
    {
        cout<<i<<" ";
    }
    return 0;
}