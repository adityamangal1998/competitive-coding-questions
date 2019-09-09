//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/polygon-possible/
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t!=0)
		{
			int n;
			cin>>n;
			int a[n],sum=0;
			for (int i=0;i<n;i++)
				{
					cin>>a[i];
					sum = sum+a[i];
				}
			int flag=0,temp;
			for (int i=0;i<n;i++)
				{
					temp = sum-a[i];
					if (a[i]<temp)
						{
							flag=1;
						}
					else
						{
							flag=0;
							break;
						}	
				}
			if (flag==1)
				{	
					cout<<"YES\n";
				}	
			else
				{
					cout<<"NO\n";
				}	
			
			t=t-1;				
		}
}
