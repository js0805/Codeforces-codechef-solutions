//https://codeforces.com/contest/1311/problem/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
   int t =0;
   int a,b;
   cin >>a>>b;
   if(a>b)
   {
      if((a-b)%2==0)
      {
         t=1;
      }
      else
      {
         t=2;
      }
   }
   else if(b>a)
   {
      if(b>a)
      {
         if((b-a)%2==0)
            t=2;
         else
            t=1;
      }
   }
   cout <<t<<"\n";
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
