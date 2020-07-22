//https://codeforces.com/problemset/problem/894/A
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
	int ans = 0;
	int n = s.length();
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (s[i] == 'Q' and s[j] == 'A' and s[k] == 'Q') {
					ans++;
					//cout << i << " " << j << " " << k << "\n";
				}
			}
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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//int t;
	//cin >> t;
	//while (t--) {
	solve();
	//}
	return 0;
}
