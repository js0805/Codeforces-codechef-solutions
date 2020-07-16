//https://codeforces.com/problemset/problem/831/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
struct st {
  char a;
  char b;
};
void solve() {
  string s1, s2, s;
  cin >> s1 >> s2;
  st x[26];
  for (int i = 0; i < s2.length(); i++) {
    x[i].a = s1[i];
    x[i].b = s2[i];
  }
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 65 and s[i] <= 90) {
      for (int j = 0; j < 26; j++) {
        if (x[j].a - 32 == s[i]) {
          cout << char(x[j].b - 32);
        }
      }
    }
    else if (s[i] >= 97 and s[i] <= 122) {
      for (int j = 0; j < 26; j++) {
        if (x[j].a == s[i]) {
          cout << x[j].b;
        }
      }
    }
    else {
      cout << s[i];
    }
  }

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
