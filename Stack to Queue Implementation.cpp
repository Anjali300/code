#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

struct Queue
{
	stack<int> s1,s2;
	
	void Enqueu(int x)
	{
		s1.push(x);
	}
	int dequeue()
	{
		if(s1.empty() && s2.empty())
		{
			cout<<"stack is empty";
			return 0;
		}
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x =  s2.top();
		s2.pop();
		return x;
	}
	
};

int main()
{
	Queue x;
	x.Enqueu(3);
	x.Enqueu(2);
	x.Enqueu(1);
	
	cout<<x.dequeue();
	cout<<x.dequeue();
	cout<<x.dequeue();
	
	return 0;
}
