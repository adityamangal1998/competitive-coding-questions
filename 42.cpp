#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    while(n--)
        {
            string s;
            cin>>s;
//            cout<<s.length();
            for (int i=0;i<s.length();i++)
                {
                	if(i%2==0)
                    	cout<<s[i];
                }
            cout<<" "; 
            for (int i=0;i<s.length();i++)
                {
                    if(i%2!=0)
                    	cout<<s[i];
                }   
        }
    return 0;
}

