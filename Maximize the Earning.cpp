//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-the-earning-137963bc-323025a6/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t!=0)
		{
			int N,K,count=0;
			cin>>N>>K;
			int a[N+1];
			int compare=a[0]=0;
			for (int i=1;i<=N;i++)
				{
					cin>>a[i];
					if(a[i]>compare)
						{
							compare=a[i];
							count++;	
						}
				}
			cout<<count*K<<"\n";	
			t--;
		}
		
}
