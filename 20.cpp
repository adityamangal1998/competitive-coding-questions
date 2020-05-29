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
			int alice[N],bob[N];
			int maxBob = 0;
			for (int i = 0; i < N; i++)
			{
				cin>>alice[i];
			}
			for (int i = 0; i < N; i++)
			{
				cin>>bob[i];
				if(maxBob<bob[i])
					{
						maxBob = bob[i];
					}
			}
			maxBob++;
			long long unsigned int count = 0;
			for (int i = 0; i < N; i++)
			{
				if (alice[i]<maxBob)
					{
						count = count + (maxBob-alice[i])*K;
					}
			}
			
			cout<<count<<"\n";
			t--;
		}
	}
