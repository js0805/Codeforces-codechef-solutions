//https://codeforces.com/problemset/problem/1248/B// Created by js0805
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
  for (int i = 0; i < n; i++) {
    cin >> a[i];

  }
  if (n == 1) {
    cout << a[0]*a[0];
    return;
  }
  sort(a, a + n);
  ll c = 0, b = 0;
  if (n % 2 == 0) {
    for (int i = n / 2; i < n; i++) {
      c = c + a[i];
    }
    for (int i = 0; i < n / 2; i++) {
      b = b + a[i];
    }
  }
  else {
    for (int i = n / 2; i < n; i++) {
      b = b + a[i];
    }
    for (int i = 0; i < n / 2; i++) {
      c = c + a[i];
    }
  }
  cout << c*c + b*b;
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
