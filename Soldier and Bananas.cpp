//https://codeforces.com/problemset/problem/546/A
created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
void solve()
{
   ll k,n,w;
   cin >>k>>n>>w;
   int i =1;
   while(w--)
   {
      n = n - k*i;
      i++;

   }
   if(n>0)
      cout << 0;
   else
      
   cout <<abs(n);

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
