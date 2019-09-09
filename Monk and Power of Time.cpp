//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n,a;
	cin>>n;
	queue <int> c;
	int i[n];
	for (int j=0;j<n;j++)
		{
			cin>>a;
			c.push(a);
		}
	for (int j=0;j<n;j++)
		{
			cin>>i[j];
		}
	int time=0;	
	for (int j=0;j<n;j++)
		{
			while(true)
				{
					if (i[j]==c.front())
						{
							time++;
							c.pop();
							break;
						}
					else
						{
							time++;
							c.push(c.front());
							c.pop();
						}	
				}
		}
	cout<<time;			
}
