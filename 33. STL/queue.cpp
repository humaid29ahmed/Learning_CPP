#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    queue<int> mq;// created a Queue iterator

    for(int i =1; i<=10; i++)
    {
        mq.push(i);//It adds the element at the back of  a queue
    }

    cout<<"Queue front value: "<<mq.front()<<endl;
    cout<<"Queue back value : "<<mq.back()<<endl;

    cout<<"Queue: ";

     while(!mq.empty()) 
     {
        /*We need to use while loop to iterate into queue iterator and the drawback of queue container
         in that when we need to print the value we need to first print the first value and then pop the value.
         which in this case removes the element from the front */
        cout<<mq.front()<<" ";
        mq.pop();
     }

     /* priority queue stores the element based on the value. where the large value has a higher priority to be at the front.
        pretty much like values will be arranged in descending order no matter in which order you push an element*/

    priority_queue<int> mpq;

    mpq.push(25);
    mpq.push(19);
    mpq.push(50);
    mpq.push(100);
    mpq.push(89);
    mpq.push(14);

    cout<<"\nPriority Queue front value: "<<mpq.top()<<endl; // top() is used to print front value of the priority queue

    cout<<"Priority Queue :";
    while(!mpq.empty()) 
    {
       /*We need to use while loop to iterate into priority queue iterator and the drawback of priority queue container
        in that when we need to print the value we need to first print the first value and then pop the value.
        which in this case removes the element from the front */
       cout<<mpq.top()<<" ";
       mpq.pop();
    }


    return 0;
}