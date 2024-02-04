#include <bits/stdc++.h> 
#include <stack>
#include <queue>
queue<int> reverseElements(queue<int> q, int k)
{
    int n = q.size();
    stack<int>s;
    // Step Fetch all element upto the K and put into Stack
    for (int i = 0 ; i < k ; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    ///put all the stack element into the queue

    while(!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    ///fetch all n-k element from Q and push it to back side
    int t = n - k;
    while(t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
