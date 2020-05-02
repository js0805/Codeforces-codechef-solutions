//https://codeforces.com/problemset/problem/617/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
   ll n;
   cin >>n;
   ll ans=0;
   ans = n/5;
   if(n%5!=0)
   {
      cout << ans+1;
   }
   else
   {
      cout << ans;
   }


   
   
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();


}

