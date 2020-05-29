#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, 
              pair<int,int> b) 
{ 
    return (a.second > b.second); 
} 


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	vector < pair <int ,int> > v;
	v.push_back(make_pair(9,1));
	v.push_back(make_pair(3,2));
	v.push_back(make_pair(4,5));
	v.push_back(make_pair(7,6));
	v.push_back(make_pair(1,1));
	sort(v.begin(),v.end(),compare);
	for (int i=0;i<5;i++)
		{
			cout<<i<<". first = "<<v[i].first<<" second = "<<v[i].second<<"\n";
		}
}
