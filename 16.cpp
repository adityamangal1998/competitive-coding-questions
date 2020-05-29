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
			int price;
			cin>>n;
			cin>>price;
			int a[n];
			for (int i=0;i<n;i++)
				cin>>a[i];
			int count = 1;
			int max = a[0];
			for (int i=1;i<n;i++)
			{
				if (a[i]>max)
					{
						max = a[i];
						count++; 
					}
			}
			cout<<count*price<<"\n";			
			
			t--;
		}
	}
