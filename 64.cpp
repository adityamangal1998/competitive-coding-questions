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
	int n;
	cin>>n;
	vector<pair<int, pair<int, int>>> a;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin>>k;
		vector<int> x(k);
		for (int j= 0; j < k; j++)
		{
			cin>>x[j];
		}
		int sum = accumulate(x.begin(),x.end(),0);
		for (int j = 0; j < k; j++)
		{
			a.push_back(make_pair(sum - x[j], make_pair(i, j)));
		}
	}
	stable_sort(a.begin(), a.end());
	cout<<a.size()<<"\n";
	for (int i = 0; i < int(a.size())-1; i++)
	{
		if((a[i].first==a[i+1].first)&&(a[i].second.first!=a[i+1].second.first))
				{
					cout<<"YES\n";
					cout << a[i + 1].second.first + 1 << " " << a[i + 1].second.second + 1 << endl;
					cout << a[i].second.first + 1 << " " << a[i].second.second + 1 << endl;
					return 0;
				}
	}

	cout<<"NO";
	return 0;
}