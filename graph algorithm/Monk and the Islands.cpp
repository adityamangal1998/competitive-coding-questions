//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include<bits/stdc++.h>

using namespace std;
vector<int> v[100002];
int visit[100002];
int level[100002];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visit[node]=1;
    while(!q.empty())
    {
        int nod=q.front();
        q.pop();
        for(auto it:v[nod])
        {
            if(!visit[it])
            {
                q.push(it);
                level[it]=level[nod]+1;
                visit[it]=1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      for(int i=1;i<=m;i++)
      {
          int x,y;
          cin>>x>>y;
          v[x].push_back(y);
          v[y].push_back(x);
      }
      bfs(1);
      cout<<level[n]<<endl;
      for(int i=1;i<=n;i++)
      v[i].clear();
      memset(visit,0,sizeof(visit));
      memset(level,0,sizeof(level));
    }
    return 0;
}
//1
//4 10
//1 2
//1 3
//2 4
//2 5
//4 8
//4 9
//5 10
//5 12
//3 6
//3 7
