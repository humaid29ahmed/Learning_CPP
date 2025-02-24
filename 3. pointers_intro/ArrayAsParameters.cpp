#include<iostream>
using namespace std;

void arrayAsParameter(int ar[])
{
    for(int i=0; i<5; i++)
    {

        cout<<ar[i]<<endl;
        ar[i] = 55;
        
    }
}

int main()
{
    int arr[] = {8,9,10,5,60};

    arrayAsParameter(arr); // passing an array as a parameter
    for(int i=0; i<5; i++)
    {

        cout<<arr[i]<<endl; // Whatever changes that have been made in arrayAsParameter function that changes will be reflected on the array that has been passed from main()
       
        
    }
    return 0;
}