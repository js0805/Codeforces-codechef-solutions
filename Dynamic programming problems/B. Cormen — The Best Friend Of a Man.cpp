//https://codeforces.com/problemset/problem/732/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ans += a[i];
		//cout << a[i];
	}
	//cout << ans << "\n";
	if (n == 1) {
		cout << 0 << "\n";
		cout << a[0];

		return;
	}
	int d = a[0];
	int dp[n];
	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		if (dp[i - 1] + a[i] < k) {
			dp[i] = k - dp[i - 1];
			d = d + dp[i];
		}
		else {
			dp[i] = a[i];
			d = d + a[i];
		}


	}
	//cout << d << "\n";
	cout << d - ans << "\n";
	for (auto i : dp) {
		cout << i << " ";
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
