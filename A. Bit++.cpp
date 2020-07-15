// Created by js0805
//https://codeforces.com/problemset/problem/282/A
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
  int ans = 0;
  for (int i = 0; i < n; i++) {
    s.clear();
    cin >> s;
    if (s[1] == '+') {
      ans++;
    }
    else {
      ans--;
    }
  }
  cout << ans;
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
