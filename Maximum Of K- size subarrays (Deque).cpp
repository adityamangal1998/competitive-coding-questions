//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximum-of-k-size-subarrays-deque/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,max,j;
	cin>>n>>k;
	long int a[n];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	for(i=0;i<=n-3;i++)
		{
			max=0;
			for(j=i;j<i+k;j++)
				{
					if(max<a[j])
						{
							max=a[j];
						}	
				}
			cout<<max<<" ";	
		}	
}
