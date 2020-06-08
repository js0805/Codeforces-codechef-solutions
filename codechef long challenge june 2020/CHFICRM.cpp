#include <bits/stdc++.h>
using namespace std;
bool solve(long long a[], long long n) {
	long long bal[2] = {1, 0};

	for (int i = 1; i < n; i++) {
		if (a[i] == 5) {
			bal[0]++;
		}
		else if (a[i] == 10) {
			if (bal[0] > 0) {
				bal[0]--;
				bal[1]++;
			}
			else {
				return 0;
			}
		}
		else if (a[i] == 15) {
			if (bal[1] > 0) {
				bal[1]--;
			}
			else if (bal[0] >= 2) {
				bal[0]--;
				bal[0]--;
			}
			else {
				return 0;
			}
		}

	}
	return 1;
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
		long long n;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool z;
		if (a[0] != 5)
			z = 0;
		else
			z = solve(a, n);
		if (z == 0) {
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	}
}