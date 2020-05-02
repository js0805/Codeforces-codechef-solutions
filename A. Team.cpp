//https://codeforces.com/problemset/problem/231/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve()
{

 int n;
 cin >>n;
 int a[n][3];
 int ans=0;
 for(int i =0;i<n;i++)
 { int sum =0;
    for(int j =0;j<3;j++)
    {
       cin >>a[i][j];
       sum+= a[i][j];
    }
    if(sum>=2)
       ans++;
 }
 cout <<ans;


   
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   solve();

   
}
