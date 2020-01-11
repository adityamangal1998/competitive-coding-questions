#include<iostream>
using namespace std;

int main()
{
	int n,i,j,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int flag=0;
	int count=0;
	int count1=0;	
	for(i=1;i<n;i++)
		{
			count++;
			j=i;
			while(j>=0 and a[j]<a[j-1])
				{
					count1++;
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
					j--;	
				}
		}
	cout<<"count = "<<count<<"count1 = "<<count1<<"\n";	
	cout<<count*count1<<"\n";	
	for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}		
	
}
//6
//4 5 3 2 7 6
//count = 5count1 = 6
//30
//2 3 4 5 6 7
