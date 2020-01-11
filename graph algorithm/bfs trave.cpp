#include<bits/stdc++.h>
using namespace std;





int main()
{
	int s,n,x,y;
	list <int> adj[20];
	cin>>n;
	bool *visited = new bool[n+1];
	for(int i = 0; i <=n; i++) 
		visited[i] = false; 
	for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			adj[x].push_back(y);
		}
	list <int> queue;
	s=1;
	visited[s]=true;
	queue.push_back(s);
	int count=0;	
	list <int>::iterator i;
	while(!queue.empty())
		{
			s = queue.front(); 
			cout << count++<< " "; 
			queue.pop_front(); 
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
			{ 
				if (!visited[*i]) 
				{ 
					visited[*i] = true; 
					queue.push_back(*i); 
				} 
			} 
		} 
}

//8
//2 3
//2 4
//4 7
//4 8
//3 5
//3 6
//5 9
//5 10
