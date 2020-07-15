//https://codeforces.com/problemset/problem/112/A
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
int  solve() {
  string s1, s2;
  cin >> s1 >> s2;
  int a1 = 0, a2 = 0, z = 0;
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] >= 97 and s1[i] <= 122) {
      s1[i] = s1[i] - 32;
    }
    if (s2[i] >= 97 and s2[i] <= 122) {
      s2[i] = s2[i] - 32;
    }

  }
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] > s2[i]) {
      return 1;
    }
    else if (s1[i] < s2[i]) {
      return -1;
    }

  }
  return 0;

  //cout << ans;
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
  cout << solve();
  return 0;
}
