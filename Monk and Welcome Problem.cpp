/*https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/*/
#include<iostream>
using namespace std;

int main()
{
	int n,b;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for (int i=0;i<n;i++)
		{
			scanf("%d",&b);
			a[i]=a[i]+b;
		}	
	for (int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}	
		
}
