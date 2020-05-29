#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			int count = 0;
			for (int i = 1;i<=n;i++)
				{
					for (int j = i+1;j<=n;j++)
						{
							if((i^j)<=n)
								{
									count++;
								}
						}
				}
			cout<<count<<"\n";	
		}
}
