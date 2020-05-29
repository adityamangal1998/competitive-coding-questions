#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n];
	int flag=0;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(k==0)
		{
			cout<<-1;
		}
	else if(k!=n)
	{	
		if(a[k-1]!=a[k])
			{
				flag=1;
			}
		if(flag==1)
			{
				cout<<a[k-1];
			}
		else
			{
				cout<<-1;
			}
	}
	
	else if(k==n)
		{
			cout<<a[k-1];
		}	
}
