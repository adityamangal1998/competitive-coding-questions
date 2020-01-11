//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/strange-game-1-7e758acb-1bff10f0/
#include<iostream>
using namespace std;

int main()
{
	long int n,k,t,max=0,i,count;
	cin>>t;
	while(t!=0)
	{
		count=0;
		max=0;
		cin>>n>>k;
		long int a[n],b;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		for(i=0;i<n;i++)
			{
				cin>>b;
				if (max<b)
					{
						max=b;
					}
			}
		for(i=0;i<n;i++)
			{
				if(max>=a[i])
					{
						count=max+1-a[i]+count;
					}
			}
		cout<<count*k<<"\n";
		t--;
	}	
}
