#include<bits/stdc++.h>
using namespace std;

int checkVowel(string s,int loc,int i)
	{
		char v[]={'a','e','i','o','u','A','E','I','O','U'};
		int count= 0;
		for (int j = i;j<loc;j++)
			{
				for (int p = 0;p<10;p++)
					{
						if(v[p]==s[j])
							count++;
					}
			}
		return count;	
	}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int t;
	cin>>t;
	int count =0;
	while(t--)
		{
			string a;
			cin>>a;
			for(int i=0;i<a.length();i++)
				{
					int j = a.length();
					while(j--)
						{
							count = checkVowel(a,j,i)+ count;
						}
				}
			cout<<count<<"\n";	
		}
}
