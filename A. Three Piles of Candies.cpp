//https://codeforces.com/problemset/problem/1196/A
//created by js0805
// simple logic if the candies are to be divided equally then adding all candies and simply dividing them by 2.
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll t =0;
   ll a,b,c;
   cin >>a>>b>>c;
   t = a+b+c;
   cout << t/2 << "\n";
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
