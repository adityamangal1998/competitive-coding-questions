#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    char temp;
    stack <char> s,s1;
    cin>>temp;
    s.push(temp);
    for (int i = 1; i < n; i++)
    {
        cin>>temp;
        if(!s.empty())
			{
				cout<<"s top "<<s.top()<<"\n";
		        if(temp==s.top())
		            {
		                s.pop();
		            }
		        else
		        	{
		            	s.push(temp);
		        	}    
	    	}
        else
        	{
            	s.push(temp);
        	}	
    }
    int count = 0;
    while(!s.empty())
        {
            s1.push(s.top());
            s.pop();
            cout++;
        }
    cout<<count<<"\n";    
    while(!s1.empty())
        {
            cout<<s1.top();
            s1.pop();
        }    
    
    
}
    
