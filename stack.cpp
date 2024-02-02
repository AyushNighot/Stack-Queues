#include <iostream>
#include <stack>
using namespace std;
class Stack{
    public:

    //properties
    int *arr;
    int size;
    int top;

    //behaviour

    Stack( int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element)
    {
            if( size - top > 1)
            {
                top++;
                arr[top] = element;
            }
            else
            {
                cout<<"Overflow" <<endl;
            }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Underflow"<<endl;
        }
    }

    int peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

    bool isEmpty()
    {
       if(top == -1)
       {
          return true;
       }   
       else
       {
          return false;
       }



    }
};
int main()
{
    Stack s(4);
     s.push(10);
     s.push(15);
     s.push(2);
     s.push(3);
     //s.push(5);

     s.pop();
     s.pop();
     s.pop();
   //  s.pop();

    int element = s.peak();
    cout<<element <<endl;


     cout<<s.isEmpty();






/*
     stack <int>s;
     s.push(10);
     s.push(15);
     s.push(2);

     s.pop();
     s.pop();

     cout<<"Top element" <<s.top() <<endl;
     cout<<"size od stack "<<s.size() <<endl;
*/



     
     
    
    return 0;

}