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
	int count=0,count1=0;	
	for(i=0;i<n;i++)
		{
			count++;
			flag=0;
			for(j=i+1;j<n;j++)
				{
					count1++;
					if (a[i]>a[j])
						{
							temp=a[j];
							a[j]=a[i];
							a[i]=temp;
							flag=1;
						}
				}
			if (flag==0)
				{
					break;
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
//count = 4count1 = 14
//56
//2 3 4 5 7 6
