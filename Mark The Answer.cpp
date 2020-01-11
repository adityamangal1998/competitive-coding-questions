//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,final,i;
   cin>>n>>k;
   int a[n];
   int count=0;
   int flag=0;
   for(i=0;i<n;i++)
   	{
   		cin>>a[i];
   		if(a[i]<=k and flag<2)
   			{
   				count++;
			}
		else if(flag==2)
			{
				final=count;
			}
		else
			{
				flag++;
			}
//	cout<<"count "<<count<<"\n";				
	}
	if(flag<2)
		{
			final=count;
		}
	cout<<final;
}
