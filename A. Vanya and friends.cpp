//https://codeforces.com/problemset/problem/677/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int

void solve()
{
   int n,h;
   cin >>n>>h;
   int arr[n];
   int t =0;
   for(int i=0;i<n;i++)
   {
      cin >>arr[i];
      if (arr[i]>h)
         t++;

   }
   cout <<n+t;


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
