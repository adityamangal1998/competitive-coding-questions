//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/hamiltonian-and-lagrangian/
#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		
	for(int i=0;i<n-1;i++)
		{
			int flag=0;
			for(int j=i+1;j<n;j++)
				{
					if (a[i]>=a[j])
						{
							flag=1;
						}
					else
						{
							flag=0;
							break;	
						}	
				}
			if(flag==1)
				{
					printf("%d ",a[i]);
				}	
				
		}	
	printf("%d ",a[n-1]);	
}
