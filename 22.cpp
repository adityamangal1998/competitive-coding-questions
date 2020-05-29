#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int temp;
    queue <int> q;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        q.push(temp);
    }
//    while(!q.empty())
//    	{
//    		cout<<q.front()<<" ";
//    		q.pop();
//		}
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        while(1)
            {
                if(a[i]==q.front())
                    {
                        time = time + 1;
                        q.pop();
                        break;
                    }
                temp = q.front();
                q.pop();
                q.push(temp);  
				time++;  

            }
    }
    cout<<time;
    



}
