// Created by js0805
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve() {
	long long int n, t, p;
	cin >> n;
	int a[n][n];
	for (long long int i = 0; i < n; i++) {
		for (long long int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
	t = 2;
	p = 1;

	for (long long int i = 0; i < n; i++) {
		for (long long int j = 0; j < n; j++) {
			if ((i + j) % 2 == 0) {
				a[i][j] = p;
				p += 2;
			}
			else {
				a[i][j] = t;
				t += 2;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{
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
