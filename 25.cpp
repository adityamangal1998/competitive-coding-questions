#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t!=0)
		{
			int n;
			cin>>n;
			int a[n]={0};
			int l;
			int p,q;
			cin>>p;
			for (int i = 0;i<p;i++)
				{
					cin>>l;
					if(a[l-1]!=1)
						{
							a[l-1] = 1;
						}
				}
			cin>>q;
			for (int i = 0;i<q;i++)
				{
					cin>>l;
			
					if(a[l-1]!=1)
						{
							a[l-1] = 1;
						}
				}
			
				int flag = 1;
			for (int i = 0;i<n;i++)
				{
					if(a[i]!=1)
						{
							flag=0;
							cout<<"NO"<<"\n";
							break;
						}
				}
			if(flag==1)
				{
					cout<<"YES"<<"\n";
				}			
			
			
			t--;
		}
	}
