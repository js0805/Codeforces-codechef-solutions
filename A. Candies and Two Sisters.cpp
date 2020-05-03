//https://codeforces.com/contest/1335/problem/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
void solve()
{
   ll a;
   cin >>a;
   if(a==1 || a==2)
   {
      cout <<0;
      
   }
  else if(a%2==0)
   {
      cout <<a/2-1;
   }
     
     else if(a%2!=0)
     {
      cout <<a/2;
     }
 
 
   cout << endl;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll t;
   cin >>t;
   for(int i=1;i<=t;i++)
      {
   solve();
 
}   
}
