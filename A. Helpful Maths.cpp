//https://codeforces.com/problemset/problem/339/A
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
  int arr[3] = {0};
  for(int i =0;i<s.length();i=i+2)
  {
      if(s[i] == '1')
         arr[0]++;
      else if(s[i]=='2')
         arr[1]++;
      else if(s[i]=='3')
         arr[2]++;
  }
  for(int i =0;i<s.length();i=i+2)
  {
      if(arr[0]!=0)
      {
         s[i] = '1';
         arr[0]--;
      }
      else if(arr[1]!=0)
      {
         s[i] = '2';
         arr[1]--;
      }
      else
      {
         s[i] = '3';
         arr[2]--;
      }
  }
  
  cout << s;
 
 
 
 
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
