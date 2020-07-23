//https://codeforces.com/problemset/problem/313/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	string s;
	cin >> s;
	int n = s.length();
	int dp[n] = {0};
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
		else {
			dp[i] = dp[i - 1];
		}
	}
	cout << "\n";
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;

		cout << dp[r - 1] - dp [l - 1] << "\n";
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
	solve();

	return 0;
}
