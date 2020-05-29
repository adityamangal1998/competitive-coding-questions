#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"hello";
	cin>>a;
	cout<<a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int p;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for (int i=0;i<n;i++)
        {
            cin>>p;
            a[i] = a[i]+p;
        }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
            

}
