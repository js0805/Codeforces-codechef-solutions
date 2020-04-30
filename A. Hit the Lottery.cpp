//https://codeforces.com/problemset/problem/996/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
void solve()
{
 int n = 5;
 int arr[5] = {1,5,10,20,100};
 int a ;
 cin >>a;
 int d=0;
 int high = 4;
 int low = 0;
 while(a!=0)
 {
      if(a>=arr[high])
      {
         a=a-arr[high];
         d++;
      }
      else
      {
         high--;
      }
 } 
 cout << d;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
