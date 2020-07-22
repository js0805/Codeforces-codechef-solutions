//https://codeforces.com/problemset/problem/1206/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	ll n;
	cin >> n;
	ll a[n];
	ll ans = 0, neg = 0, z = 0;
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] > 0) {
			if (a[i] != 1) {
				ans = ans + a[i] - 1;
				a[i] = 1;
			}
		}
		if (a[i] < 0) {
			neg++;
			if (a[i] != -1) {
				ans = ans - a[i] - 1;
				a[i] = -1;

			}
		}
		if (a[i] == 0) {
			z++;
		}
	}
	if (z != 0) {
		ans += z;
	}
	else {
		if (neg % 2 != 0) {
			ans += 2;
		}
	}


	cout << ans;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.in", "w", stdout);
#endif

	solve();

	return 0;
}
