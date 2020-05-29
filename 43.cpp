#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int n,flag,flag1;
	cin>>n;
	long long unsigned int a[n],b[n],c[n],max =0,min=0,temp,sum=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		cin>>c[i];
		
		
	for(int i=0;i<n;i++)
		{
			flag=0;
			max = 0;
			for(int j=0;j<=c[i];j++)
				{
					if((c[i]&j)==j)
						{
							temp = b[i]^j;
							if(max<(a[i]^temp))
								{
									max =a[i]^temp; 
								}
						}	
				}
			if(flag==1)
				{
					if(max<min)
						{
							max = min;
						}	
				}			
			sum = sum + max;			
		}	
	cout<<sum;			
}
