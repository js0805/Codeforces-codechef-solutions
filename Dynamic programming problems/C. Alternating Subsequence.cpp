//https://codeforces.com/problemset/problem/1343/C
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
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0, sol = 0, i = 0;
	while (i < n) {
		if (a[i] > 0) {
			ans = 0;
			while (a[i] > 0 and i < n) {
				ans = max(ans, a[i]);
				i++;
			}
			//cout << ans << "->";
			sol += ans;
		}
		else if (a[i] < 0 and i < n) {
			ans = a[i];

			while (a[i] < 0) {

				ans =  max(ans, a[i]);
				i++;
			}

			//cout << ans << "->";
			sol += ans;
		}
	}
	cout << sol << "\n";




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
	while (t--)
		solve();

	return 0;
}
