//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t!=0)
		{
			int N,K;
			cin>>N>>K;
			int a[N];
			int min = INT_MAX;
			for(int i=0;i<N;i++)
			{
				cin>>a[i];
				if (min>a[i])
					{
						min=a[i];
					}
			}
			cout<<K-min<<"\n";
			t--;
		}
	
}
