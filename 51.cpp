#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int q;
	cin>>q;
	while(q--)
		{
			int n;
			cin>>n;
			int max = 0,temp,temp1;
			int a[n+1];
			a[0]=0;
			for (int i=1;i<=n;i++)
				{
					cin>>a[i];
				}
			int swap = 0,flag=0;
			for (int i=1;i<=n;i++)
				{
					if((a[i]-(i))>2)
						{
							flag=1;
							break;
						}	
				}
			if(flag!=1)	
				{
					while(1)
						{
							flag = 0;
							for (int i = 1;i<n;i++)
								{
									if(a[i]>a[i+1])
										{
											temp = a[i];
											a[i]= a[i+1];
											a[i+1] = temp;
											swap++;
											flag=1;
										}	
								}
							if(flag==0)
								{
									break;
								}	
						}
				}
			if(flag==1)
				{
					cout<<"Too chaotic\n";
				}	
			else
				{
					cout<<swap<<"\n";
				}	
			
		}
	}
