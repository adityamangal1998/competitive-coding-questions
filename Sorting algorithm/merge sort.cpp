#include<iostream>
#include <algorithm>
using namespace std;
void merge(int a[],int start,int mid,int end);
void merge_sort(int a[],int start,int end);

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}	
		
}

void merge(int a[],int start,int mid,int end)
{
	int n1,n2,i;
	n1=mid-start+1;
	n2=end-mid;
	int l[n1];
	int r[n2];
	for(i=0;i<n1;i++)
		{
			l[i]=a[start+i];
		}
	for(i=0;i<n2;i++)
		{
			r[i]=a[mid+1+i];
		}	
//	set markers on both sub-arrays (left and right)
	int j=0;
	i=0;
	int k=start;
	while(i<n1&&j<n2)
		{
			if(l[i]<r[j])
				{
					a[k++]=l[i++];
				}
			else{
					a[k++]=r[j++];
				}	
		}	
//	copy the remaining elements
	while(i<n1)
		{
			a[k++]=l[i++];
		}
	while(j<n2)
		{
			a[k++]=r[j++];
		}
//	for(int i=start;i<=end;i++)
//				{
//					cout<<a[i]<<" ";
//				}
//			cout<<"\n";			
}

void merge_sort(int a[],int start,int end)
{
	int mid;
	if(start<end)
		{
			mid=(start+end)/2;

			merge_sort(a,start,mid);
			merge_sort(a,mid+1,end);
         // print the pattern of dividing	
//		 cout<<"statr = "<<start<<" mid = "<<mid<<" end = "<<end<<"\n";		
//			for(int i=start;i<=end;i++)
//				{
//					cout<<a[i]<<" ";
//				}
//			cout<<"\n";	
			merge(a,start,mid,end);
		}
}

