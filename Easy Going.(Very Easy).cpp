//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t!=0)
		{
			int m,n,l;
			cin>>n>>m;
			int a[n+1];
			a[0]=0;
			for(int i=1;i<=n;i++)
				{
					cin>>l;
					a[i]=l+a[i-1];
				}
			l=a[n]-a[n-1];
			cout<<l<<"\n";	
			t--;
		}
}
