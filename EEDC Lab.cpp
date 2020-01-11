//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/eedc/
#include<iostream>
#include <sstream> 
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,a[n+1],b[n+1];
	a[0]=0;
	b[0]=0;
	for(i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=b[i-1]+a[i];
			cout<<b[i]<<"\n";
		}
	cout<<"\n";	
	int j,q,right=0,left=0,sum,sum1;
	cin>>q;
	int index[n]={0};
	for(i=1;i<=n;i++)
		{	
			sum=b[i-1]+b[n]-b[i];
			left=a[i-1];
			if(i==n){right=0;}
			else{right=a[n];}
			sum1=(left+right)%10;
			if(sum1==0 and sum%3==0)
				{
					index[i]=1;	
				}	
//			cout<<"index "<<i<<"left "<<left<<" right "<<right<<"\n";
//			cout<<"sum "<<sum<<" sum1 "<<sum1<<"\n";
					
				
		}
	while(q!=0)
		{
			int l,r;
			cin>>l>>r;
			int count=0;
			for(int i=l;i<=r;i++)
				{
					if(index[i]==1)
						{
							count++;
						}
				}
			cout<<count<<"\n";
			
			q--;
		}	
}
