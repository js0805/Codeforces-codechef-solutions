//https://codeforces.com/problemset/problem/1030/A
// created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
   int n;
   cin >>n;
   int arr[n];
   int a=0;
   for(int i =0;i<n;i++)
   {
      cin >>arr[i];
      if(arr[i]==1)
      
         a++;
   }
  // cout << a<< " " << b << endl;
   if(a==0)
      cout << "easy";
   else 
      cout << "hard";
 
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
