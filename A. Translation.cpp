//https://codeforces.com/problemset/problem/41/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
 string s,t;
 getline(cin,s);
 getline(cin,t);
 int n = s.length();
 if(n != t.length())
{
   cout<< "NO";
   exit(0); 
}
 for(int i=0;i<n;i++)
 {
   //cout << s[i] << "-" << t[n-i-1];
   if(s[i]!=t[n-i-1])
   {
      cout << "NO";
      exit(0);
   }
   
 }
 cout <<"YES";
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
