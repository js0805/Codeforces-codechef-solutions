//https://codeforces.com/problemset/problem/711/A
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
  char a[n][5];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }
  int t = 0;
  for (int i = 0; i < n; i++) {
    if (a[i][0] == 'O' and a[i][1] == 'O') {
      t = 1;
      a[i][0] = '+';
      a[i][1] = '+';
      break;
    }
    else if (a[i][3] == 'O' and a[i][4] == 'O') {
      t = 1;
      a[i][3] = '+';
      a[i][4] = '+';
      break;
    }

  }
  if (t == 1) {
    cout << "YES" << "\n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cout << a[i][j];
      }
      cout << "\n";
    }
  }
  else {
    cout << "NO";
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
  //cin>>t;
  //while(t--){
  solve();
  //}
  return 0;
}
