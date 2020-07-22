//https://codeforces.com/problemset/problem/1323/A
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int>ans;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << 1 << "\n";
			cout << i + 1 << "\n";
			return;
		}
		else {
			ans.push_back(i + 1);
		}
	}
	if (ans.size() >= 2) {
		cout << 2 << "\n";
		for (int i = 0; i < 2; ++i)
		{
			/* code */
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	else {
		cout << -1 << "\n";
	}

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.in", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
