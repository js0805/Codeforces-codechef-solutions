//https://codeforces.com/problemset/problem/59/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
  string s ;
  getline(cin,s);
  int n = s.length();
  int t =0;
  for(int i=0;i<n;i++)
  {
      if(s[i]>=65 && s[i]<=90)
      {
         t++;
      }
  }
  if(t>n/2)
  {
   for(int i=0;i<n;i++)
   {
      if(s[i]>=97 && s[i]<=122)
         s[i] = s[i]-32;
   }
}
   else
   {
      for(int i=0;i<n;i++)
   {
      if(s[i]>=65 && s[i]<=90)
         s[i] = s[i]+32;
   }
  }
  cout << s;
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
