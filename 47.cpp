#include <bits/stdc++.h>

using namespace std;
// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int count=0,temp=0;
	int val=0;
	int flag = 0;
	for(int i=0;i<n;i++)
		{
			if(val==0 && s[i]=='U')
				{
					count++;
				}
			if(s[i]=='U')
				{
					val++;
				}
			if(s[i]=='D')
				{
					val--;
				}		
		}
	return count;	

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";


    return 0;
}

