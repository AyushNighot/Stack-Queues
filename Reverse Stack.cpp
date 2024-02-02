#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string str = "Ayush";

    stack<char>s;

     ///copying the string into the stack
    for(int i = 0 ; i < str.length() ; i++ )
    {
        char ch = str[i];
        s.push(ch);
    }  

    string ans = "";
    
    ///popping until stack gets empty and pushing into answer string 
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

      cout<<" Reverse of the Stack is :" <<ans<<endl;


    return 0;
}
