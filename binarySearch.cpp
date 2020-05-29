#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int search,int s,int e)
    {
        int m;
        m = (s+e)/2;
        if(a[m]==search)
            {
                return m;
            }
        else if (search>a[m])
            {
                binarySearch(a,search,m+1,e);
            }
        else if (search<a[m])
            {
                binarySearch(a,search,s,m-1);
            }
    }



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int a[] = {1,2,3,4,5,6};
    int search = 6;
    int b = binarySearch(a,search,0,5);
    cout<<b;
}
