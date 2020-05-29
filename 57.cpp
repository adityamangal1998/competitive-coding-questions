#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	lli a,b;
	cin>>a;
	cin>>b;
	lli temp,temp1;
	int bit_array[61]= {0};
	int h_m_b = log2(b)/log2(2);
	// cout<<"h_m_b = "<<h_m_b<<"\n";
	temp = b;
	temp1 = a;
	for (int i = 0; i <=h_m_b; i++)
	{
		if((temp)&1)
			{
				bit_array[i]=1;  
			}
		temp = temp>>1;
		if((temp1)&1)
			{
				bit_array[i]=1;  
			}
		temp1 = temp1>>1;		
	}
	int flag =0;
	int index;
	for (int i = 0; i <=h_m_b; i++)
	{
		if((bit_array[i]==1)&&(flag==0))
			{
				flag=1;
				index = i;
			}	
		if(flag==1)
			{
				bit_array[i]=1;
			}	
	} 
	// cout<<"\n";
	// for (int i = 0; i <=h_m_b; i++)
	// {
	// 	cout<<bit_array[i]<<" ";	
	// } 
	// cout<<"\n";
	lli num=0;
	lli co = 0;
	for (int i = 0; i <=h_m_b; i++)
	{
		if(bit_array[i]==1)
			{
				co++;
			}	
	} 
	// cout<<"co "<<co;
	for (int i = 0; i <=h_m_b; i++)
	{
		num = num + (bit_array[i]*pow(2,i));	
	} 
	// cout<<num<<"\n";
	lli count;
	count = b-a+1;
	if(num==b)
	{
		cout<<count;
	}
	else if((num-b)==(b-a))
	{
		count = (b-a)*2+1;
		cout<<count;
	}
	else if((num-b)<(b-a))
	{
		count = (b-a) + num - b + pow(2,index);
		cout<<count;
	}
	else if(co==(h_m_b+1))
		{
			cout<<(b-a)+2;
		}
	else if((num-b)>(b-a))
	{
		count = (b-a)*2 ;
		cout<<count;
	}

}




