//https://codeforces.com/contest/1272/problem/C
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
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  ll key[26] = {0};
  for (ll i = 0; i < k; i++) {
    char t;
    cin >> t;
    key[t - 97]++;
  }
  ll ans = 0;
  ll temp = 0;
  for (ll i = 0; i < n; i++) {
    if (key[s[i] - 97] != 0) {
      temp++;

    }
    else {
      ans += (temp * (temp + 1)) / 2;
      temp = 0;
      //   cout << ans << " ";
    }
  }
  ans += (temp * (temp + 1)) / 2;
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
  cout.tie(0);

  solve();

  return 0;
}
