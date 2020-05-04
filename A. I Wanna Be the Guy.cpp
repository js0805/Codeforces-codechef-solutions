//https://codeforces.com/problemset/problem/469/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin >>n;
   ll p,q;
   cin >> p;
   ll a[p];
   ll b[q];
   int arr[n+1] = {0};
   arr[0] = 1;
   for(int i=0;i<p;i++)
   {
      cin >> a[i];
      arr[a[i]]++;
   }
   cin >>q;
   for(int i=0;i<q;i++)
   {
      cin >> b[i];
      arr[b[i]]++;
   }
   for(int i=1;i<n+1;i++)
   {
      if(arr[i]==0)
      {
         cout << "Oh, my keyboard!";
         exit(0);
      }
   }
   cout << "I become the guy.";
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
