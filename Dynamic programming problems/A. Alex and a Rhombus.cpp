//https://codeforces.com/problemset/problem/1180/A
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
	int dp[n + 1];
	dp[1] = 1;
	dp[2] = 5;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + 4 * (i - 1);
	}
	cout << dp[n];
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
	//int t;
	//cin >> t;
	//while (t--) {
	solve();

	return 0;
}
