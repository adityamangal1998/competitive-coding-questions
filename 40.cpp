#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	int temp;
	int count = 0;
	while(n--)
		{
			cin>>temp;
			if(__builtin_popcount(n)==1)
				{
					count++;
				}	
		}
	cout<<count;
}
