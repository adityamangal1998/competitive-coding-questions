#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long int li;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	int max = 0;
	if(k<n)
	{
		for (int i = 0; i < k-1; i++)
		{
			if(max<v[i])
				max = v[i];
		}
	}
	else
	{
		int index;
		for (int i = 0; i < n; i++)
		{
			if(max<v[i])
				{
					max = v[i];
					index = i;
				}
			if(index==n-1 && n==k)
				{
					for (int i = 0; i < n-2; ++i)
					{
						if(max<v[i])
						{
							max = v[i];
						}
					}
				}		
		}
	}
	cout<<max;
	

}
