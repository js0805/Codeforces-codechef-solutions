//https://codeforces.com/problemset/problem/706/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	int n, q;
	cin >> n ;
	int cost[n];
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}
	sort(cost, cost + n);
	cin >> q;
	int ans = 0;
	while (q--) {
		ans = 0;
		int t;
		cin >> t;
		if (cost[0] > t) {
			cout << 0 << "\n";
			continue;
		}
		if (cost[n - 1] <= t) {
			cout << n << "\n";
			continue;
		}
		auto it = upper_bound(cost, cost + n, t) - cost;
		cout << it << "\n";
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
