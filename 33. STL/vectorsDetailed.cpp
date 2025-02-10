#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> names = {"Humaid", "Nabeela", "Masood", "Sameena"};

    // for(auto i = names.begin(); i != names.end(); i++)
    // {
    //     cout<<*i<<endl;
    // }

    names.push_back("Jamal"); // push_back() adds the elements at the end of vector
    names.push_back("Faizan");
    names.push_back("Ajit");
    names.push_back("Ajay");

    for(int i=0; i<names.size(); i++) // size() provides the count of the number of elements in a list
    {
        cout<<names[i]<<"\t";
    }

    cout<<"\nElements after poping out 3 elements"<<endl;

    names.pop_back();// pop_back() remove the elements at the end of vector
    names.pop_back();
    names.pop_back();
   
    for(int i=0; i<names.size(); i++)
    {
        cout<<names[i]<<"\t";
    }


    if(!names.empty())//In empty() it will return boolean 0 if it is not empty or 1 if it is empty
    {
        cout<<"\nThe vector is not empty!";
    }
    else
    {
        cout<<"\n"<<names.empty();
        cout<<"\nThe vector is empty!";
    }

    return 0;
}