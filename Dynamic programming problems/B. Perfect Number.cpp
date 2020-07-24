//https://codeforces.com/problemset/problem/919/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
int getSum(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
void solve() {
	int k;
	cin >> k;
	vector<int>a;

	a.push_back(19);
	int t = a[0];
	for (int i = 1; i < k; i++) {
		int p = t + 9;
		t =  p;
		if (getSum(p) != 10) {
			i--;
			continue;

		}
		else {
			a.push_back(p);
		}
		//cout << i << " " << p << "\n";
	}
	cout << a[k - 1];



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
