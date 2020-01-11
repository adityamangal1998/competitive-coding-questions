//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/memorise-me/
#include <iostream>

#include <cstdio>
#include <stdio.h>

int main() {
	int num;
	scanf("%d",&num);
	int a[10000]={0},b;
	for(int i=0;i<num;i++)
		{
			scanf("%d",&b);
			a[b]++;
		}
	int q;
	scanf("%d",&q);
	while (q!=0)
		{
			int n;
			scanf("%d",&n);
			if (a[n]!=0)
			{
				printf("%d\n",a[n]);	
			}
			else
			{
			    printf("NOT PRESENT\n");
			}
		q=q-1;	
		}	
	
}
