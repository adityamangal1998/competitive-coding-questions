#include<bits/stdc++.h>
using namespace std;

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
			int a[100000] = {0};
			int b[n];
			for(int i = 0;i<n;i++)
				{
					cin>>b[i];
				}
			unsigned long int sum = 0;	
			int count = 0;	
			for(int i = n-1;i>=0;i--)
				{
					if(a[b[i]]==0)
						{
							count++;
							sum = sum + b[i]*count;	
							a[b[i]] = 1;
						}
					else
						{
							count = 1;
							a[100000] = {0};
							sum = sum + b[i]*count;
							a[b[i]]=1;	
							
						}	
				}
					
			cout<<sum<<"\n";	
			
		}
}
