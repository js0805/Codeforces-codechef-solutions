//https://codeforces.com/problemset/problem/1343/B
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
	int suml = 0;
	int sumr = 0;
	for (int i = 0; i < n / 2; i++) {
		a[i] = 2 * (i + 1);
		suml = suml + a[i];
	}
	int j = 0;
	for (int i = n / 2; i < n; i++) {
		a[i] = 2 * j + 1 ;
		j++;

		sumr = sumr + a[i];
	}
	a[n - 1] = a[n - 1] + 2 * (n / 4);
	sumr = sumr + 2 * (n / 4);
	if (suml == sumr) {
		cout << "YES" << "\n";
		for (auto i : a) {
			cout << i << " ";
		}
		cout << "\n";
	}
	else cout << "NO" << "\n";

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
