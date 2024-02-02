#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
    //creating   stack
     stack<int>s;

     ///inserting element into the stack
     s.push(23);
     s.push(38);
     s.push(56);

     ///Removing element from the stack 
     s.pop();

     //printing the top element of the stack
     cout<<" Top Element of the stack is:"<<s.top() <<endl;

     //printing the size of the stack 
     cout<<"Size Of the Stack is:"<<s.size() <<endl;


    return 0;
}