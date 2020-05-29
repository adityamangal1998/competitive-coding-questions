//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
#include<iostream>
using namespace std;

int binaryConv(int* arr,int s,int e)
{
	int num = 1;
	int sum = 0;
	for (int i=e-1;i>=s-1;i--)
		{
			if (arr[i]==1)
				{
					sum = num+sum;
				}
			num = num*2;	
		}
	if (sum%2==1)
		{
			return 1;
		}
	else
		{
			return 0;	
		}	

}

int main()
{
	int n,q;
	int a[n];
	cin>>n;	
	cin>>q;
	for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int querry;
	
	for (int i=0;i<q;i++)
		{
			cin>>querry;
			if (querry==1)
				{
					cin>>querry;
					if (a[querry-1]==1)
						{
							a[querry-1]==0;
						}
					else
						{
							a[querry-1]==1;
						}		
				}
			else
				{
					int s,e;
					cin>>s>>e;
					s=binaryConv(a,s,e);
					if (s==1)
						{
							cout<<"ODD";
						}
					else
						{
							cout<<"EVEN";	
						}	
				}		
		}
}

