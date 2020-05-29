#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;	
	while(t!=0)
		{
			int N;
			cin>>N;
			int a[1000];
			int flag=0;
			int i= 0;
			while(N!=0)
				{
					a[i] = N%10;
					N = N/10;
					i++;
				}
			N = i;		
			sort(a,a+N);
			for(int i=1;i<N;i++)
				{
					if(a[i]-a[i-1]==1)
						{
							flag=1;
						}
					else
						{
							cout<<"NO\n";
							flag=0;
							break;
						}	
				}
			if (flag==1)
				{
					cout<<"YES\n";
				}	
			t--;
		}

}
