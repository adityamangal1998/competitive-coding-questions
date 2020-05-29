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
			int a[n];
			int zero = 0,one = 0;
			for(int i=0;i<n;i++)
				{
					cin>>a[i];
					if(a[i]&1==1)
						{
							one++;
//							cout<<"one "<<a[i]<<"\n";
						}	
					else
						{
//							cout<<"zero "<<a[i]<<"\n";
							zero++;
						}	
				}
//			cout<<zero<<" "<<one<<"\n";	
			cout<<one*zero<<"\n";	
		}
}
