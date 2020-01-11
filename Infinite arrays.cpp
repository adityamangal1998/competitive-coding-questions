//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/infinity-array-715a233b/
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long int m=1000000007;
	while(t!=0)
		{
		
		long int n;
		cin>>n;
		long int a[n+1];
		long int sum=0;
		a[0]=0;
		for (long int i=1;i<=n;i++)
			{
				cin>>a[i];
				a[i]=a[i]+a[i-1];
			}
		sum=a[n];	
		long int q;
		cin>>q;
		long int l[q];
		long int r[q];
		long int sr,sr1,sl,sl1,res;
		for (long int i=0;i<q;i++)
			{
				cin>>l[i];
			}
		for (long int i=0;i<q;i++)
			{
				cin>>r[i];
			}
		for (long int i=0;i<q;i++)
			{
				l[i]--;
				sr=r[i]%n;
				sr1=r[i]/n;
				if (sr==0)
					{
						res=sr1*sum;
					}
				else{
						res=sr1*sum+a[sr];
					}
				sl=l[i]%n;
				sl1=l[i]/n;
				if (sl==0)
					{
						res=res-(sl1*sum);
					}
				else{
						res=res-(sl1*sum+a[sl]);
					}
			cout<<(res%m)<<" ";			
			}	
					
		t--;
		}
}
