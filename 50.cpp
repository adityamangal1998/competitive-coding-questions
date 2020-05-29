#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[100000]= {0},max = 0,temp;
	for (int i=1;i<=n;i++)
		{
			cin>>temp;
			if(max<temp) max = temp;
			a[temp] = i; 
		}
	int swap = 0;	
	for (int i = 1;i<=max;i++)
		{
			if(a[i]!=i)
				{
					while(1)
						{
							if(a[i]!=i)
								{
									temp = a[i];
									a[i] = a[temp];
									a[temp] = temp;
									swap++; 
								}
							else
								break;	
							
						}
				}
		}
	cout<<swap;	
}
	
