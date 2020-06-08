#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
	ll n, k, x, i, y;
	cin >> n;
	k = n;
	x = 1;
	while (n % 2 == 0) {
		n = n / 2;
		x++;
	}
	i = pow(2, x);
	y = k / i;
	cout << y << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}