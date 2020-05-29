#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned int n,k;
	cin>>n>>k;
	int flag=0;
	unsigned int count=0,l;
	for(int i=0;i<n;i++)
		{
			cin>>l;
			if(l>k && flag==0)
				{
					flag=1;
				}
			else if (l>k && flag==1)
				{
					break;
				}
			else if(l<=k)
				{
					count++;
				}		
		}
	cout<<count;	
}
