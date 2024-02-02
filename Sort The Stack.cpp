#include <bits/stdc++.h>
void sortedStack(stack<int> &stack,int x)
{
	///base case
	if(stack.empty() || stack.top() < x)
	{
		stack.push(x);
		return;
	}

	int n = stack.top();
	stack.pop();

	sortedStack(stack,x);

	stack.push(n);
} 
void sortStack(stack<int> &stack)
{
	///base case
	if(stack.empty())
	{
		return;
	}

	int val = stack.top();
	stack.pop();

	sortStack(stack);

	sortedStack(stack,val);
}
