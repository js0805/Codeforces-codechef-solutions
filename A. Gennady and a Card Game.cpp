// https://codeforces.com/contest/1097/problem/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
   char s[2];
   for(int i =0;i<2;i++)
   {
      cin >> s[i];
   }
   char g[5][2];
   
   int t =0;
   for(int i =0;i<5;i++)
   {
      for(int j =0;j<2;j++)
      {
         cin >> g[i][j];
         
         if(s[0] == g[i][j])
         {
            t++;
            break;
         }
         if(s[1]==g[i][j])
         {
            t++;
            break;
         }
      }
     
   }
   if(t>0)
   {
      cout << "YES";
 
   }
   else
      cout << "NO";
 
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
