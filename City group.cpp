//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/city-group-3/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,k,i,j,b,c,q,c1,c2,l1,l2;
	cin>>n;
	cin>>k;
	int a[n];
	for(i=1;i<=k;i++)
		{
			cin>>b;
			for(j=1;j<=b;j++)
				{
					cin>>c;
					a[c]=i;         //////this tell city group
				}
			
		}
	cin>>q;
	int way1,way2,way3,final;
	while(q!=0)
		{
			cin>>c1>>c2;
			l1=a[c1];
			l2=a[c2];
			////there are three ways 
			way1=abs(k-l1+l2);
			way2=abs(k-l2+l1);
			way3=abs(l1-l2);
			final=min(way1,way2);
			final=min(final,way3);
			cout<<final<<"\n";
			q--;	
		}	
}
