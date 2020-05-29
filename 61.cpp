#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long int li;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n,k,temp;
	int count = 0;
	cin>>n>>k;
	std::vector<int> v(101,-1);
	std::vector<int> a;
	for (int i = 0; i < n; i++)
		{
			cin>>temp;
			if(v[temp]==-1)
				{
					v[temp] = i;
					count++;
				}	
		}
	if(count>=k)
		{	count = 0;
			cout<<"YES\n";
			for (int i = 0; i < 101; i++)
				{
					if(v[i]!=-1)
						{
							a.push_back(v[i]);
							count++;
						}
					if(count==k)
						{
							break;
						}		
				}
			sort(a.begin(), a.end());
			for (int i = 0; i < a.size(); i++)
				{
					cout<<a[i]+1<<" ";
				}	
		}	
	else
		{
			cout<<"NO\n";
		}	
	}	