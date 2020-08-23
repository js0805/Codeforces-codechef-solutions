//https://codeforces.com/problemset/problem/632/C
// Created by js0805
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<b;i++)
#define prDouble(x) cout << fixed << setprecision(10) <<x
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
bool compare (string a, string b) {
    return (a + b) < (b + a);
}
void solve() {
    int n;
    cin >> n;
    vector<string> a;
    fr(0, n) {
        string q;
        cin >> q;
        a.pb(q);
    }

    sort(a.begin(), a.end(), compare);
    string ans ;
    for (auto  i : a) {
        ans += i;
        //cout << i << "\n";
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
    cout.tie(0);

    solve();

    return 0;
}
