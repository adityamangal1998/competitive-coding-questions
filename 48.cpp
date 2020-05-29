#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	int step=0;
	int flag=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		{
			if (a[i]==1)
			{
				flag = 1;
				continue;
			} 
			else if(a[i+2]==0 && i<n-2)
				{
					step++;
					i++;
					continue;
				}
			else if(a[i+1]==0&&i<n-1)
				step++;
			if(flag==1)
				{
					step++;
					flag=0;
				}			
				
		}
	cout<<step;	
}
