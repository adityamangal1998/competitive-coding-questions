//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/oliver-and-the-battle-1/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main()
 {
 	list < pair <ll,ll> > v[1000000];
 	int t;
 	cin>>t;
 	while(t!=0)
 		{
 			ll m,n,i,j,q;
 			cin>>m>>n;
 			ll a[m][n];
 			for(i=0;i<m;i++)
 				{
 					for(j=0;j<n;j++)
 						{
 							cin>>a[i][j];
						}
				}
			////travesring;
			q=0;
			if(a[0][0]==1)
				{
					v[0]=make_pair(0,1);
				}
			///for first row
//			for(j=1;j<n;j++)
//				{
//					if(a[0][j-1]==0)
//						{
//							v.push_back({0,0,});
//						}
//				}	
// 			
 			
 			
 			
 			
 			/////queue flushing
 			t--;
		 }
 }
