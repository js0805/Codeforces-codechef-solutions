//https://codeforces.com/problemset/problem/1285/A
//created by js0805

#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll t;
   cin >>t;
   char s[t];
   ll l =0,r=0;
   for(ll i;i<t;i++)
   {
      cin >> s[i];
      if(s[i]=='L')
      {
         l++;
      }
      else
      {
         r++;
      }
   }
   cout << l+r+1;

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
