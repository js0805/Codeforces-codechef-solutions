// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
using namespace std;
using ll = long long;
void solve() {
	string a;
	cin >> a;
	//cout << a.length() << "\n";
	int ans = 0;
	stack<char>s;
	s.push(a[0]);
	for (int i = 1; i < a.length(); i++) {
		if (!s.empty() and s.top() == 'x') {
			if (a[i] == 'y') {
				s.pop();
				//cout << "X executed" ;
				ans++;
			}
		}
		else if (!s.empty() and s.top() == 'y') {
			if (a[i] == 'x') {
				s.pop();
				ans++;
				//cout << "Y executed" ;
			}
		}
		else {
			s.push(a[i]);
		}
	}
	cout << ans << "\n";
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