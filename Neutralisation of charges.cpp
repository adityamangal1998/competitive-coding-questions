//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charges-repel/
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charges-repel/
#include<stdio.h>
int main()
{
	int n,i,j,flag;
	char s[1000000];
	scanf("%d",&n);
	scanf("%s",s);

	j=-1;
	for (i=0;i<n;i++)
		{
			if (i==n-1)
				{
					if (s[i]!='*')
						{
							if (s[i]!=s[j])
								{
									s[++j]=s[i];
								}
							else
								{
									j--;
								}	
						}
				}
			else if(s[i]!=s[i+1])
				{
					if (s[i]!=s[j])
						{
							s[++j]=s[i];
						}
					else
						{
							j--;
						}
				}
			else if(s[i]==s[i+1])
				{
					s[i+1]='*';
					s[i]='*';
					i++;
				}			
		}	
		n=j+1;
	printf("%d\n",n);	
	for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
}
