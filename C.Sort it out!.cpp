//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    pair<int,int> p[n];
    long int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p[i]=make_pair(a[i],i);
        }
    sort(p,p+n);
    for(int i=0;i<n;i++)
        {
            cout<<p[i].second<<" ";
        }
}

