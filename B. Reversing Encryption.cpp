//https://codeforces.com/problemset/problem/999/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 1) {
    cout << s;
    return;
  }
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      reverse(s.begin(), s.begin() + i);

    }
  }
  cout << s;
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
