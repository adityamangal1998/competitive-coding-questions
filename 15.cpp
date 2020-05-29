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
			int n;
			cin>>n;
			int a[n];
			for (int i=0;i<n;i++)
				cin>>a[i];
			int subLen=0;
			int max = 0; 
			int flag=0;
			for (int i=0;i<n;i++)
				{
					if(a[i]%2==0)
						{
							if (flag==1)
								{
									subLen++;
									if(max<subLen)
										{
											max = subLen;
										}
									continue;		
								}
							flag = 1;
							subLen = 1;	
							continue;
						}
					flag = 0;
					subLen = 0;	
				}	
			if (max == 0)
				cout<<-1<<"\n";
			else	
				cout<<max<<"\n";
			t--;
		}
	}
