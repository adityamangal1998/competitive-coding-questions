#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[1000001]={0};
	int max = 0;
	int temp;
	for (int i=0;i<n;i++)
		{
			cin>>temp;
			a[temp]=a[temp] + 1;
			if(temp>max)
				{
					max = temp;
				}
		}
	for (int i=0;i<=max;i++)
		{
			if(a[i]==1)
				{
					cout<<i<<" ";
				}
		}	
		
	
}
