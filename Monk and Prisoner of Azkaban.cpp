//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-prisoner-of-azkaban/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long int *a = new long int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	stack<int> stk;
	int *x = new int[n];
	int *y = new int[n];
	stk.push(n-1);
	for(int prev=n-2;prev>=0;prev--)
		{
			while(!stk.empty())
				{
					if(a[stk.top()]<a[prev])
						{
							int index = stk.top();
							x[index]=prev+1; //Position is 1-indexing
							stk.pop();
							cout<<index;
						}
					else
						break;
				}
			cout<<"\n";
			stk.push(prev);
		}
while(!stk.empty())
	{
		int index = stk.top();
		x[index]=-1;
		stk.pop();
	}
//stk.push(0);
//for(int next=1;next<=n-1;next++)
//	{
//		while(!stk.empty())
//			{
//				if(a[stk.top()]<a[next])
//					{
//						int index = stk.top();
//						y[index]=next+1; //Position is 1-indexing
//						stk.pop();
//					}
//				else
//					break;
//			}
//		stk.push(next);
//	}
//while(!stk.empty())
//	{
//		int index = stk.top();
//		y[index]=-1;
//		stk.pop();
//	}
//for(int i=0;i<n;i++)
//	{
//		cout<<x[i]+y[i]<<" ";
//	}
}
