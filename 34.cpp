#include<bits/stdc++.h>
using namespace std;
#define INT_16 16

int left_rotation(int n,int d)
{
	return ((n<<d | n>>(INT_16-d))&65535);
}

int right_rotation(int n,int d)
{
	return ((n>>d | n<<(INT_16-d))&65535);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			int d;
			char r;
			cin>>n>>d>>r;
			if(r=='L')
				{
					cout<<left_rotation(n,d)<<"\n";
				}
			else
				{
					cout<<right_rotation(n,d)<<"\n";
				}	
		}
	
}
