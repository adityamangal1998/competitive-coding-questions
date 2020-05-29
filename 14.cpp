#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	int index;
	int max = 0;
	for (int i=0;i<n;i++)
		{
			cin>>a[i];
			if (max<=a[i])
				{
					index = i;
					max = a[i];
				}
		}
	cout<<n-index;
	
	
}
		
