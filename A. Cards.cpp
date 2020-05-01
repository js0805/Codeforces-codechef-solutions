//https://codeforces.com/problemset/problem/1220/A
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
   int a =0,b =0;
   for(int i=0;i<t;i++)
   {
      cin >>s[i];
      if(s[i]=='n')
      {
         a++;
         //cout << 'o' << " ";
      }
      else if(s[i]=='z')
      {
         b++;
         //cout << 'z' << " ";
      }
   }
   for(int i =1;i<=a;i++)
   {
      cout << 1 << " ";
   }
   for(int i =1;i<=b;i++)
   {
      cout << 0 << " ";
   }
 
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
