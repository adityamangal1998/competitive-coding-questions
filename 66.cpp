#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; ++i) {
		cin >> x[i];
	}
	
	sort(x.begin(), x.end());
	vector<int> res = { x[0] };
	for (int i = 0; i < n; ++i) {
		cout << x[i]<<" ";
	}
	cout<<"\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 31; ++j) {
			int lx = x[i] - (1 << j);
			int rx = x[i] + (1 << j);
			bool isl = binary_search(x.begin(), x.end(), lx);
			bool isr = binary_search(x.begin(), x.end(), rx);
			cout<<"lx = "<<lx<<"\n";
			cout<<"rx = "<<rx<<"\n";
			cout<<"isl = "<<isl<<"\n";
			cout<<"isr = "<<isr<<"\n";
			if (isl && isr && int(res.size()) < 3) {
				res = { lx, x[i], rx };
			}
			if (isl && int(res.size()) < 2) {
				res = { lx, x[i] };
			}
			if (isr && int(res.size()) < 2) {
				res = { x[i], rx };
			}
			for (int i = 0; i < res.size(); ++i)
			{
				cout<<res[i]<<" ";
			}
			cout<<"\n";
		}
	}
	
	cout << int(res.size()) << endl;
	for (auto it : res)
		cout << it << " ";
	cout << endl;
	
	return 0;
}