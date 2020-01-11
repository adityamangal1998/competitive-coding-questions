//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
#include<iostream>
using namespace std;

int main()
{
	int N,Q;
	scanf("%d %d",&N,&Q);
	int a[N+1]={0};
	for (int i=1;i<=N;i++)
		{
			scanf("%d",&a[i]);	
		}
	while (Q!=0)
	{
	int x,f;
	scanf("%d",&x);
	if (x==1)
		{
			scanf("%d",&f);
			if (a[f]==0){a[f]=1;}
			else {a[f]=0;}
		}
	else
		{
			int o,l,r,count;
			scanf("%d %d",&l,&r);
			if (a[r]==0){
				printf("EVEN\n");
			}
			else{
				printf("ODD\n");
			}
		}	
	Q--;	
	}
}
