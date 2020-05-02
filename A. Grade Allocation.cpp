//https://codeforces.com/problemset/problem/1316/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll n,m;
   cin >>n>>m;
   ll a[n];
   int sum =0;
   for(int i =0;i<n;i++)
   {
      cin >>a[i];
      sum+=a[i];
   }
   if(sum>m)
   {
      cout << m<<"\n";
 
   }
   else
      cout << sum << "\n";
 
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
