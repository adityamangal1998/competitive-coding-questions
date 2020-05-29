#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int count_one(lli n)
	{
		int count = 0;
		while(n)
			{
				count = count + (n&1);
				n = n>>1;
			}
		return count;	
	}

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
			vector<pair <lli,lli> > a(n);
			lli temp;
			lli arr[n];
			for (int i=0;i<n;i++)
				{
					cin>>temp;
					arr[i] = temp;
					a[i].first = count_one(temp);
					a[i].second = i;
				}
			sort(a.begin(), a.end());
			for (int i=0;i<n;i++)
				{
					cout<<arr[a[i].second]<<" ";
				}
			cout<<"\n";	
		}	
}
