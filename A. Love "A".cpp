//https://codeforces.com/problemset/problem/1146/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   string s;
   getline(cin,s);
   int t =0;
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='a')
      {
         t++;
      }
   }
   if(t>s.length()/2)
   {
      cout << s.length();
   }
   else
      cout << 2*t-1;

}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
/*int t;
cin >>t;
for(int i =1;i<=t;i++)*/
solve();
}
