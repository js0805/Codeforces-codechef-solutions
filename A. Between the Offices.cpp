//https://codeforces.com/contest/867/problem/A
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
   char s[t];
   ll a = 0,b=0,c=0,d=0;
   for(int i =0;i<t;i++)
   {
      cin >>s[i];
   }
   for(int i=0;i<t-1;i++)
   {
      if(s[i]=='S' && s[i+1]=='F')
      {
         a++;
      }
      else if(s[i]=='F' && s[i+1]=='S')
      {
         b++;
      }
      
   }
  
   
   if (a>b)
   {
      cout << "YES";
 
   }
   else 
   {
      cout <<"NO";
   }
 
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
/*int t;
cin >>t;
for(int i =1;i<=t;i++)*/
solve();
}
