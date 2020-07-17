//https://codeforces.com/problemset/problem/764/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long int;
void solve() {
  ll n;
  cin >> n;
  vector<ll>a;
  for (ll i = 0; i < n; i++) {
    int t;
    cin >> t;
    a.push_back(t);
  }
  for (int i = 0; i <= n - i - 1; ++i) {
    if (i % 2 - 1)
      swap(a[i], a[n - i - 1]);
  }
  for (auto i : a) {
    cout << i << " ";
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
