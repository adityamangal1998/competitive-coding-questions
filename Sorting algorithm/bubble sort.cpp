#include<iostream>
using namespace std;

int main()
{
	int n,i,j,temp;
	cin>>n;
	int a[n];
	/////element insertion
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int count=0,count1=0;	
	while(true)
		{
			int flag=0;
			count++;
			for(i=0;i<n-1;i++)
				{
					count1=0;
					if(a[i]>a[i+1])
						{
							temp=a[i];
							a[i]=a[i+1];
							a[i+1]=temp;
							flag=1;
						}
//						for(j=0;j<n;j++)
//							{
//								cout<<a[j]<<" ";
//							}
//				cout<<"\n";				
				}
			if(flag==0)
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
	cout<<"\n"<<count;		
		
		
}

//6
//4 5 3 2 7 6
//count = 4count1 = 0
//0
//2 3 4 5 6 7
//4
