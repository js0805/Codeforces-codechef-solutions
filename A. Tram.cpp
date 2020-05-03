//https://codeforces.com/problemset/problem/116/A
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
 int a[n];
 int b[n];
 int res[n];
 for(int i =0;i<n;i++)
 {
   cin >>a[i];
   cin >>b[i];
 }
 res[0] = b[0];
 for(int i =1;i<n;i++)
 {
   res[i] = res[i-1]-a[i] + b[i];
 }
 ll t= INT_MIN;
 for(int i =0;i<n;i++)
 {
      if(res[i]>t)
      t = res[i]; 
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
