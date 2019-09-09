//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include<iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while (t!=0)
		{
			int n,k,min=1000000,temp;
			scanf("%d %d",&n,&k);
			int a[n];
			for (int i=0;i<n;i++)
				{
					scanf("%d",&a[i]);
					temp=a[i];
					if (min>temp)
						{
							min = temp; 
						}			
				}	
			int time = k - min;
			if (time<0)
			    {
			        time = 0;
			        printf("%d\n",time);
			    }
			else
			    {
			        printf("%d\n",time);
			    }
			t=t-1;
		}
}
