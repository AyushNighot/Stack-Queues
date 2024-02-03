#include <iostream>
#include <queue>

using namespace std;

int main()
{

     queue<int>q;

     ///pushing the element into the queue
     q.push(97);
     q.push(98);
     q.push(99);

     ///printing the size of the queue
     cout <<" Size Of the queue is :" <<q.size() <<endl;

     ///printing the front element of the queue
     cout <<" Front element of the queue is:" <<q.front() <<endl;

     ///popping the element from the queue
     q.pop();
     q.pop();
     q.pop();

     cout <<" Size after Removing the element from the queue" <<q.size() <<endl;

     ///checking if the queue is empty

     if(q.empty())
     {
        cout <<" Queue Is Empty" <<endl;
     }
     else
     {
        cout <<" Queue is not empty" <<endl;
     }


    return 0;
}