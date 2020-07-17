//https://codeforces.com/problemset/problem/1093/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
void solve() {
  string s;
  cin >> s;
  int arr[26] = {0};
  for (int i = 0; i < s.length(); i++) {
    arr[s[i] - 97]++;

  }
  for (int i = 0; i < 26; i++) {
    if (arr[i] == s.length()) {
      cout << -1 << "\n";
      return;
    }
  }
  if (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) {
    for (int i = 0; i < 26; i++) {
      while (arr[i] != 0) {
        cout << char(i + 97);
        arr[i]--;
      }
    }
  }

  else {
    cout << s ;
  }
  cout << "\n";


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
