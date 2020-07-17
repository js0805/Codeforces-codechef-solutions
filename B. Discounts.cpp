//https://codeforces.com/problemset/problem/1132/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long int;
void solve() {
  ll n, sum = 0;;
  cin >> n;
  ll a[n], m;
  for (ll i = 0; i < n; ++i)
  {
    /* code */
    cin >> a[i];
    sum += a[i];
  }
  cin >> m;
  ll p[m];
  for (ll i = 0; i < m; i++) {
    cin >> p[i];
  }
  sort(a, a + n);

  for (ll i = 0; i < m; i++) {
    ll t = sum;
    //cout << sum << "\n";
    //cout << p[i] << "\n";
    //cout << a[n - p[i]] << "\n";
    t = t - a[n  - p[i]];
    cout << t << "\n";

  }



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
  //int t;
  //cin>>t;
  // while(t--){
  solve();
//   }
  return 0;
}
