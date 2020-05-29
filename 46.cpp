#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	 int n;
    cin>>n;
    string temp;
    int temp1;
    map <string,int> g;
    for (int i=0;i<n;i++)
        {
            cin>>temp>>temp1;
            g.insert(pair<string,int>(temp,temp1));
        }
    map<string,int> :: iterator it;
	for (int i=0;i<n;i++)
        {
            cin>>temp;
            it = g.find(temp);
            if(it->first)
            	{
            		cout<<temp<<"="<<g.find(temp);
				}
			else
				{
					cout<<"Not found\n";
				}	
            
        }   
}
