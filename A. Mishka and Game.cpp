//https://codeforces.com/problemset/problem/703/A
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
   int m[n],c[n];
   int a =0,b=0;
   for(int i =0;i<n;i++)
   {
         cin >>m[i] >> c[i];
         if(m[i]>c[i])
            a++;
         else if(m[i]<c[i])
            b++;
   }
   if(a>b)
   {
      cout << "Mishka";
 
   }
   else if(b>a)
   cout << "Chris" ;
 
   else
   {
      cout <<"Friendship is magic!^^" ;
   }
 
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
