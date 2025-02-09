#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {5,1,68,7,10,36}; //In STL Array or any datastructure that can be looped in calller ITERATORS

    cout<<"Unsorted Array: ";
    for(int element: arr)
    {
        cout<<element<<" ";
    }

    cout<<"\n Sorted Array: ";

    sort(arr, arr+6); //Using sort algorithm and the algorithm it uses in Intro sort

    for(int element: arr)
    {
        cout<<element<<" ";
    }
    // search algorithm works only on the sorted array or iterator 
    int number;

     cout<<"\nEnter the number to be searched: ";
     cin>>number;

    if(binary_search(arr, arr+6, number )) //Using Binary Search Algorithm from STL
    {
        cout<<"\n NUMBER FOUND!";
    }else{

        cout<<"\n NUMBER NOT FOUND!";
    }

  
    return 0;
}