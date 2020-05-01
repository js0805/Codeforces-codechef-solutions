//https://codeforces.com/problemset/problem/1283/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll a,b;
   cin >> a >> b;
   ll t = (23-a)*60;
   t = t+ (60-b);
   cout << t <<"\n";


}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin >>t;
for(int i =1;i<=t;i++)
solve();
}
