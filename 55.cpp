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
		last = (int)n/k;
		sum_k = k*(last*(last+1))/2;
		lli p;
		lli s = k*k;
		lli s_bef = k;
		lli k_c = k;
		for (lli i=k;i<=n;i=i+k)
			{
				if(i==s)
					{
						temp = temp+1;
						k_c = s_bef;
						s_bef = s;
						s = s*k;
						continue;	
					}
				if(i%s_bef == 0)
					{
						temp = temp + i/s_bef;
					}	
				else if(i%k_c == 0)	
					{
						temp = temp + i/k_c;
					}
				else
					{
						p = k_c/k;
						while(p!=1)
							{
								if(i%p==0)
								{
									temp = temp + i/p; 
									break;
								}
								p = p/k;
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
// sum = 500000500000
// sum_k = 5154860815
// temp = 52686511
// 494898325696

// sum = 500000000500000000
// sum_k = 5154639324742257
// temp = 53140507108305
// 494898501682366048
