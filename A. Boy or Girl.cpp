//https://codeforces.com/problemset/problem/236/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
void solve()
{
   string s;
   getline(cin,s);
   int arr[26] = {0};
   for(int i=0;i<s.length();i++)
   {
      arr[s[i]-97]++;
   }
   int t =0;
   for(int i =0;i<26;i++)
   {
      if(arr[i]>0)
      {
         t++;
      }
   }
   if(t%2==0)
      cout << "CHAT WITH HER!";
   else
      cout << "IGNORE HIM!";


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
