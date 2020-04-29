// https://codeforces.com/contest/734/problem/A

//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
   int n;
   cin >>n;
   vector<char>s;
   int a =0,d =0;
   for(int i =0;i<n;i++)
   {
      char t;
      cin >>t;
      s.push_back(t);
      if(s[i]=='A')
      {
         a++;
      }
      else
      {
         d++;
         
      }
   }
   
if(a>d)
   cout <<"Anton";
else if(d>a)
   cout << "Danik";
else
   cout << "Friendship";
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
