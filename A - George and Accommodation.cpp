//https://codeforces.com/problemset/problem/467/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >>n;
  int p[n],q[n];
  int t =0;
  for(int i =0;i<n;i++)
  {
      cin >>p[i];
      cin >>q[i];
      if(q[i]-p[i]>=2)
      {
        t++;
      }
  }
  cout << t;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
  // ll t;
   //cin >>t;
   //for(int i=1;i<=t;i++)
     // {
   solve();

//}   
}
