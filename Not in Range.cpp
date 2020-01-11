//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/not-in-range-44d19403/
#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    pair <int ,int> ranks[n];
    for(int i=0;i<n;i++)
        cin>>ranks[i].first>>ranks[i].second;
    sort(ranks,ranks+n);
    long long int L,R=0,s=0,ans,aux;
    for(int i=0;i<n;i++){
        L = ranks[i].first <= R? R+1 : ranks[i].first;
        R = ranks[i].second;
        aux = ((L+R)*(R-L+1.0))/2.0;
        // cout<<aux<<endl;
        R<L? R=L-1 : s+= aux;
        
         //cout<<s<<" "<<L<<" "<<R<<" "<<aux<<endl;
    }
    ans=500000500000-s;
    cout<<ans;
//499998497977
    return 0;
}
