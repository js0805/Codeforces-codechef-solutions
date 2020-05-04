//https://codeforces.com/problemset/problem/136/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int

void solve()
{
   int n;
   cin >>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin >>arr[i];
   }
   int t =1;
   int i=0;
   while(t!=n+1)
    {  
         if(arr[i]==t)
         {
            cout << i +1 << " ";
            i=0;
            t++;
         }
         else if(n>i)
         i++;

      
   }

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
