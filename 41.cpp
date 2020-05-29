#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	while(q--)
		{
			int l,r,v;
			cin>>l>>r>>v;
			for(int i = l-1;i<r;i++)
				{
					a[i] = a[i] & v;
				}
		}
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";		
}
