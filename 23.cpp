#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int p;
    int time = 0;
    if (m>n) p = n;
    else p = m; 
    long int a[n],b[m];
    for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
    sort(a,a+n);
    stack <int> s;
    stack <int> q;
    for (int i = 0; i < n; i++)
        {
            s.push(a[i]);
        }
    for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
    sort(b,b+m);
    int i;
//    for(int l =1;l<m;l++)
//    	cout<<b[m];
//    while(!s.empty())
//        {
//            cout<<s.top();
//            s.pop();
//        }
    if(b[m-1]<s.top())
        {
            cout<<-1;
        }   
    else
    {
    	
        for (i = 0; i <n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                	if(s.empty())
                		{
                			break;
						}
                    else if(b[m-j]>=s.top())
                        {
                            s.pop();
                        }
                    else
                        {
                            q.push(s.top());
                            s.pop();
                        }          
                }
                time++;
                if(s.empty() && q.empty())
                    {
                        break;
                    }
                while(!q.empty())
                    {
                        s.push(q.top());
                        q.pop();
                    }
                    
            }   
        
    }
    cout<<time+i;
        
}
