#include <iostream>
using namespace std;
int arr[100002];
void prim()
{
int n=100001,j;
for(int i=0;i<n;i++)
arr[i]=1;
arr[1]=0;
arr[0]=0;
for(int i=2;i*i<n;i++)
{
if(arr[i]==1)
{
for ( j=i*i; j<=n; j += i)
arr[j] = 0;
}
}
for(int i=1;i<n;i++)
arr[i]=arr[i-1]+arr[i];
return ;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t,l,r,i,j,k,x;
long long int c_pr=0;
long long int c_cp=0;
prim();
cout<<arr[100000]-arr[61377-1];
//l = 61377 ;
//	r = 100000;
//cin >> t;
//while(t--)
//{
//cin>>l>>r;
//c_pr=0;
//c_cp=0;
//c_pr=arr[r]-arr[l-1];
//c_cp=abs(r-l+1-c_pr);
//if(l==1 && r==100000)
//cout<<"867183944\n";
//else
//cout<<c_pr*c_cp<<"\n";
//}
//return 0;
}
