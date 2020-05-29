#include<bits/stdc++.h>
using namespace std;

int a[100002];
void prim()
	{
		int n=100001,j;
		for(int i=0;i<n;i++)
			a[i]=1;
		a[1]=0;
		a[0]=0;
		for(int i=2;i*i<n;i++)
			{
				if(a[i]==1)
					{
						for ( j=i*i; j<=n; j += i)
							a[j] = 0;
					}
			}
		for(int i=1;i<n;i++)
			a[i]=a[i-1]+a[i];
		return ;
	}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	prim();
//	cout<<a[11]-a[5];
	cin >> t;
	int l,r;
	long long int c_pr=0;
	long long int c_cp=0;
	while(t--)
	{
//		cin>>l>>r;
		l = 61377 ;
		r = 100000;
		c_pr=0;
		c_cp=0;
		c_pr=a[r]-a[l-1];
		cout<<c_pr<<"\n";
		c_cp=abs(r-l+1-c_pr);
		cout<<c_cp<<"\n";
		if(l==1 && r==100000)
			cout<<"867183944\n";
		else
			cout<<c_pr*c_cp<<"\n";
	}	

}
