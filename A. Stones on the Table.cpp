//https://codeforces.com/problemset/problem/266/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin >>n;
   char a[n];

 int t =0;
 for(int i=0;i<n;i++)

 {
   cin >>a[i];
 }
 for(int i =0;i<n-1;i++)
 {
   if(a[i]==a[i+1])
   {
      t++;
   }
 }
cout <<t;


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
