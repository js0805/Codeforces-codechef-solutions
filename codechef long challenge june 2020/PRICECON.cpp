// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	ll n, k;
	cin >> n >> k;
	ll p[n];
	ll sum = 0;
	ll a = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		sum += p[i];
		if (p[i] >= k) {
			a += k;
		}
		else {
			a += p[i];
		}
	}

	if ((sum - a) < 0) {
		cout << 0 << "\n";
	}
	else {
		cout << sum - a << "\n";

	}

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.in", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}