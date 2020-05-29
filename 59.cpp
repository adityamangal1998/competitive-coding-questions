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
	int n;
	cin>>n;
	if (n==1)
		cout<<1;
	else if(n==2)
		cout<<"1 2";
	else
		{
			int sum = 0;
			cout<<3<<" "<<4<<" ";
			sum = 8;
			for (int i = 2; i < n; i++)
			{
				sum = sum + 3 + 2;
				cout<<sum<<" ";
			}
		}
	

}	