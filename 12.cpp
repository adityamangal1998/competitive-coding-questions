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
			int max =0;
			cin>>n;
			int a[n];
			int sum=0;
			for (int i=0;i<n;i++)
				{
					cin>>a[i];
					if (max<a[i])
						{
							max = a[i];
						}
					sum	= sum + a[i];
				}
			sum = sum-max;
			if (sum>max)	
				cout<<"Yes\n";
			else
				cout<<"No\n";
			t--;
		}
}
