//https://codeforces.com/problemset/problem/228/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
 int a,b,c,d;
 cin >>a>>b>>c>>d;
 int t =0;
 if(a==b ||a==c||a==d)
 {
 	t++;
 }
 if(b==c||b==d)
 {
 	t++;
 }
 if(c==d)
 	t++;
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
