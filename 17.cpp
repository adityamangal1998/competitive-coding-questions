#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t!=0)
		{
			int n;
			const unsigned int M = 1000000007;
			cin >> n;
			long long int sum=0;
			unsigned long long int a[n],subset;
			for (int i = 0;i<n;i++)
				cin>>a[i];
			if(n>=64)
			{
				cout<<0<<"\n";
			}
			
			else
			{	
				subset = pow(2,n-1);
				for (int i = 0;i<n;i++)
					{
						if(a[i]>=subset)
							{
								sum=(sum+a[i]%M)%M;
							}	
					}	
				cout<<sum<<"\n";
			}
			t--;
		}
	}
