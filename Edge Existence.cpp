//Edge Existence
//You have been given an undirected graph consisting of N nodes and M edges. 
//This graph can consist of self-loops as well as multiple edges. In addition , you have also been given Q queries. 
//For each query , you shall be given 2 integers A and B. You just need to find if there exists an edge between node A and node B. 
//If yes, print "YES" (without quotes) else , print "NO"(without quotes).
//
//Input Format:
//
//The first line consist of 2 integers N and M denoting the number of nodes and edges respectively. 
//Each of the next M lines consist of 2 integers A and B denoting an undirected edge between node A and B. 
//The next line contains a single integer Q denoting the number of queries. 
//The next Line contains 2 integers A and B denoting the details of the query.
//
//Output Format
//
//Print Q lines, the answer to each query on a new line.
//
//Constraints:
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector <int> a[1000];
	for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
	int q;
	cin>>q;
	while(q!=0)
		{
			int x,y,flag=0;
			cin>>x>>y;
			for(int i=0;i<a[x].size();i++)
				{
					if(a[x].at(i)==y)
						{
							cout<<"YES\n";
							flag=1;
							break;
						}
				}
			if (flag==0)
				{
					cout<<"NO\n";
				}	
			q--;		
		}	
}

//4
//5
//1 2
//2 4
//3 1
//3 4
//4 2
//5
//1 2



