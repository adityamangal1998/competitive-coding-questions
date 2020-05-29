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
			int sum=0,temp;
			for (int i=0;i<n;i++)
				{
					cin>>temp;
					if(temp>0)
						{
							sum = sum + temp;
						}
				}
			temp = 0;
			while(sum)
				{
					temp = temp + (sum&1);
					sum = sum>>1;
				}
			if(temp==1)
				cout<<"Yes"<<"\n";
			else
				cout<<"No"<<"\n";			
		}
}
