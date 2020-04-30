//https://codeforces.com/problemset/problem/581/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
   int a,b;
   cin >>a>>b;
   int d=0,s=0;
   if(a>b)
   {
      a = a-b;
      d=b;
      s = a/2;
   }
   else if(b>a)
   {
      b = b-a;
      d=a;
      s = b/2;
        }
   else
   {
      d = a;

   }
 cout << d <<" "<< s;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
