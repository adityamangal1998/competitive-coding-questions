#include<bits/stdc++.h>
using namespace std;

class Graph
{
	private:
		int v;
		list <int> *adj;
		void rec(int v,bool visited[]);
	public:
		Graph(int v);
		void addEdge(int v,int w);
		void DFS();	
};

Graph::Graph(int v)
{
	this->v=v;
	adj= new list<int>[v];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::rec(int v,bool visited[])
	{
		visited[v]=true;
		cout << v << " ";
		list <int> :: iterator i;
		for(i=adj[v].begin();i!=adj[v].end();++i)
			{
				if(!visited[*i])
					{
						rec(*i,visited);
					}
			}
	}

void Graph::DFS()
{
	bool *visited =new bool[v];
	for(int i=0;i<v;i++)
		{
			visited[i]=false;
		}
	for (int i = 0; i < v; i++) 
        if (visited[i] == false) 
            rec(i, visited); 	
}	
int main()
{
	Graph g(4); 
    g.addEdge(0, 2); 
    g.addEdge(0, 1); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversaln"; 
    g.DFS(); 
}
