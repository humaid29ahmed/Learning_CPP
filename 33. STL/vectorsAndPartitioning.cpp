#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> myInts = {1,2,3,4,5,6,7,8,9,10}; // This is how we can create a vector which is also called has dynamic array

    for(int x: myInts) // This is how we iterate the element of a vector
    {
        cout<<x<<" ";
    }
    cout<<"\n";

    /*Partition is an algorithm which helps to partitions the elements in way that the element which
      satisfies the condition that will be provide via lambda function as a parameter will store the 
      elements on the left and remaining on the right.
    */

    partition(myInts.begin(), myInts.end(), [](auto x){return x%2==0 ;}); // o/p After Partitioning: 10 2 8 4 6 5 7 3 9 1 

    cout<<"After Partitioning: ";

    for(int x: myInts) // This is how we iterate the element of a vector
    {
        cout<<x<<" ";
    }


    return 0;
}