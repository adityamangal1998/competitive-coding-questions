//https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/the-colorful-street-1/
#include <stdio.h>
 
int min(int a,int b)
{
	return (a>b?b:a);
}
 
int arr[21][3];
 
int main() 
{
	int t,i,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
		///bottom approach	
		for(i=n-2;i>=0;i--)
		{
			arr[i][0]+=min(arr[i+1][1],arr[i+1][2]);
			arr[i][1]+=min(arr[i+1][0],arr[i+1][2]);
			arr[i][2]+=min(arr[i+1][0],arr[i+1][1]);
		}
		int min=arr[0][0]<arr[0][1]?arr[0][0]:arr[0][1];
		min=min<arr[0][2]?min:arr[0][2];
		printf("%d\n",min);
	}
	return 0;
}
