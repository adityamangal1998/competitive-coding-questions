#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	string s;
	cin>>s;
	for (int i=0;i<s.size();i++)
		{
			int l=i;
			while(1)
			{
				for (int j=i;j<=l;j++)
					{
						cout<<s[j];
							
					}
				cout<<"\n";	
				if (l<s.size()-1)
						{
							l++;
						}
				else
					{
						break;
					}	
			}
				
		}
}
