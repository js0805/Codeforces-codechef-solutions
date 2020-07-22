//https://codeforces.com/problemset/problem/580/A
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
	int a[n], dp[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			dp[i] = dp[i] + dp[i - 1];
			//cout << 1 ;
		}
	}
	int ans = INT_MIN;
	for (auto i : dp) {
		ans = max(ans, i);

	}
	cout << ans;
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
