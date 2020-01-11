//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/help-jarvis-8a39566e/
#include<bits/stdc++.h>

using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t!=0)
			{
				char b[1000000];
				cin>>b;
				int count=0,flag; ////////number of digits
				count=strlen(b);
				int a[count];
				if (count==1)
				    {
				        cout<<"YES\n";
				    }
				else
				    {
        				for(int i=0;i<count;i++)
        					{
        						a[i]=(int)b[i]-48;
        					}
        				/////sorting;
        				sort(a,a+count);	
        				for(int i=0;i<count-1;i++)
        					{
        						if(abs(a[i]-a[i+1])==1)
        							{
        								flag=1;
        							}
        						else
        							{
        								flag=0;
        								break;
        							}	
        					}
        				if (flag==1)
        					{
        						cout<<"YES\n";
        					}	
        				else
        					{
        						cout<<"NO\n";
        					}			
        				
				    }
				t--;    
			}
	}
