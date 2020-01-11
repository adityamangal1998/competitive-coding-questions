//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int vs[n],b,flag=1;
	for(int i=0;i<n;i++)
		{
			cin>>vs[i];
		}
	for(int i=0;i<n;i++)
		{
			cin>>b;
			if(vs[i]<b)
				{
					flag=0;
				}
		}
	if(flag==0)
		{
			cout<<"No"<<"\n";
		}
	else
		{
			cout<<"Yes"<<"\n";
		}			
}
