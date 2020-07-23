//https://codeforces.com/problemset/problem/1182/A
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
	int n;
	cin >> n ;
	if (n % 2 != 0) {
		cout << 0;
	}
	else {
		cout << (ll)pow(2, n / 2);
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
