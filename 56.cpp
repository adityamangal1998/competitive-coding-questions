#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		lli n,k,last;
		lli sum=0,sum_k=0 ,temp=0;
		cin>>n>>k;
		
		sum = (n*(n+1))/2;
		for(lli i=n;i>=1;i--)
		{
			if(i%k==0)
				{
					last = i;
					break;
				}
		}
		last = last/k;
		sum_k = k*(last*(last+1))/2;
		for (lli i=k;i<=n;i=i+k)
			{
				lli p = i;
				while(p!=1)
					{
						p = p/k;
						if(p%k==0)
							{
								continue;
							}
						else
							{
//								cout<<p<<"\n";
								temp = temp + p;
								break;
							}	
					}
				// cout<<i<<" temp = "<<temp<<"\n";		
			}
		cout<<"sum = "<<sum<<"\n";
		cout<<"sum_k = "<<sum_k<<"\n";
		cout<<"temp = "<<temp<<"\n";	
		sum = sum-sum_k+temp;	
		cout<<sum<<"\n";
	}	
}
