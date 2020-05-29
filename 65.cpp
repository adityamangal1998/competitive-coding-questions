// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int lli;
// typedef long int li;
// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cin.tie(NULL);
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif
// 	lli n;
// 	cin>>n;
// 	int flag=0;
// 	int index1=-1,index2=-1;
// 	string element1,element2;
// 	string s = to_string(n);
// 	for (int i = s.length()-1; i >=0; i--)
// 			{
// 				if((s[i]=='2' || s[i]=='5' || s[i]=='0' || s[i]=='7')&&flag==0)
// 					{
// 						index1=s.length()-i;
// 						element1 = s[i];
// 						flag=1;
// 					}
// 				else if(element1=="5" && (s[i]=='2' || s[i]=='7' || s[i]=='0'))
// 					{
// 						index2 = s.length()-i;
// 						element2 = s[i];
// 						break;
// 					}
// 				else if(element1=="2" && (s[i]=='5'))
// 					{
// 						index2 = s.length()-i;
// 						element2 = s[i];
// 						break;
// 					}
// 				else if(element1=="7" && (s[i]=='5'))
// 					{
// 						index2 = s.length()-i;
// 						element2 = s[i];
// 						break;
// 					}	
// 				else if(element1=="0" && (s[i]=='0' || s[i]=='5'))
// 					{
// 						index2 = s.length()-i;
// 						element2 = s[i];
// 						break;
// 					}			
// 			}
// 	cout<<index1<<"\n";
// 	cout<<index2<<"\n";
// 	cout<<element2<<"\n";
// 	cout<<element1<<"\n";		
// 	if(index2==-1 || index1==-1)
// 		{
// 			cout<<-1;
// 		}	
// 	else
// 		{
// 			if(index1==1)
// 				{
// 					s = element2+element1;
// 					stringstream my(s);
// 					int x;
// 					my >> x;
// 					// cout<<x<<"\n";
// 					if(x%25==0)
// 						{
// 							cout<<index2-2;
// 						}
// 					else
// 						{
// 							cout<<index2-1;
// 						}	
// 				}
// 			else
// 				{
// 					s = element2+element1;
// 					cout<<"s = "<<s<<"\n";
// 					stringstream my(s);
// 					int x;
// 					my >> x;
// 					// cout<<x<<"\n";
// 					if(x%25==0)
// 						{
// 							cout<<index1-1+index2-2;
// 						}
// 					else
// 						{
// 							cout<<index1-1+index2-1;
// 						}	
// 				}	
			
// 		}		
// }			
#include <bits/stdc++.h>

using namespace std;

const int INF = 1000 * 1000 * 1000;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	long long n;
	cin >> n;
	
	string s = to_string(n);
	
	int ans = INF;
	
	int len = s.size();
	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j) {
			if (i == j) continue;
			string t = s;
			int cur = 0;
			for (int k = i; k < len - 1; ++k) {
				swap(t[k], t[k + 1]);
				++cur;
			}
			
			for (int k = j - (j > i); k < len - 2; ++k) {
				swap(t[k], t[k + 1]);
				++cur;
			}
			
			int pos = -1;
			for (int k = 0; k < len; ++k) {
				if (t[k] != '0') {
					pos = k;
					break;
				}
			}
			
			for (int k = pos; k > 0; --k) {
				swap(t[k], t[k - 1]);
				++cur;
			}
			
			long long nn = atoll(t.c_str());
			if (nn % 25 == 0)
				ans = min(ans, cur);
		}
	}
	
	if (ans == INF)
		ans = -1;
		
	cout << ans << endl;
	
	return 0;
}