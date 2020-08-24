//https://codeforces.com/contest/1029/problem/B
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#define pb push_back
#define ll long long
#define fr(a,b) for(ll i=a;i<b;i++)
#define prDouble(x) cout << fixed << setprecision(10) <<x
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
void solve() {
  ll n;
  cin >> n;
  vi a(n);
  fr(0, n) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j + 1 < n and a[j + 1] <= a[j] * 2)
      j++;
    ans = max(ans, j - i + 1);
    i = j;
  }
  cout << ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
