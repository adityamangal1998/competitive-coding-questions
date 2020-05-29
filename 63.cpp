#include <bits/stdc++.h>

using namespace std;
bool check(string s,string t)
	{
		return s.size()<t.size();
	}
int main() {
// #ifdef _DEBUG
// 	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// #endif
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; ++i)
		cin >> s[i];
		
	sort(s.begin(), s.end(), [&] (const string &s, const string &t) {
		return s.size() < t.size();
	});
	for (auto it : s)
		cout << it << endl;
	cout<<s[2].find("aba")<<"\n";
	cout<<string::npos<<"\n";
	for (int i = 0; i < n - 1; ++i) {
		if (s[i + 1].find(s[i]) == string::npos) {
			cout << "NO\n";
			return 0;
		}
	}
	
	cout << "YES\n";
	for (auto it : s)
		cout << it << endl;
	
	return 0;
}