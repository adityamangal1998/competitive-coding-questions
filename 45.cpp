#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n;
	double sum = 0,sum1 = 0;
	double ans;
	cin>>n;
	int a[n],w[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		{
			cin>>w[i];
			sum = sum + w[i];
			sum1 = sum1 + a[i]*w[i];
		}
	ans = (double)sum1/sum;	
	cout<<ans;		
}
		
