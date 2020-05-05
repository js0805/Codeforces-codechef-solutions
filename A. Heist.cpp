//https://codeforces.com/problemset/problem/1041/A
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
 ll arr[n];
 for(int i =0;i<n;i++)
 {
 	cin >> arr[i];
 }
 sort(arr,arr+n);
 int t  = arr[n-1] - arr[0];
 t = t - n+1;
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
