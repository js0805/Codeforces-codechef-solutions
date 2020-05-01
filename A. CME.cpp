//https://codeforces.com/problemset/problem/1223/A
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
   ll ans;
   if(t==2)
   {
      ans =2;

   }
   else if(t%2==0)
   {
      ans=0;
   }
   else
   {
      ans=1;
   }
   cout << ans<<endl;

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
