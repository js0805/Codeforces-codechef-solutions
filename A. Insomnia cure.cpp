//https://codeforces.com/problemset/problem/148/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int

void solve()
{
   ll k,l,m,n,d;
   cin >>k>>l>>m>>n>>d;
   
   ll t=0;
   for(int i =1;i<d+1;i++)
   {
      if(i%k == 0)
      {
         t++;
      }
      else if(i%l == 0)
      {
         t++;
      }
      else if(i%m == 0)
      {
         t++;
      }
      else if(i%n == 0)
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
