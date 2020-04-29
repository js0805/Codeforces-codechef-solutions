// https://codeforces.com/problemset/problem/263/A
// created by js0805

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int arr[5][5];
int a =0,b=0;
for(int i=0;i<5;i++)
{
   for(int j =0;j<5;j++)
   {
      cin >>arr[i][j];
      if(arr[i][j]==1)
      {
         a=i;
         b =j;
      }
   }
 
}
int d =0;
if(a>2)
{
   while(a!=2)
   {
      d++;
      a--;
      
   }
}
else if(a<2)
{
   while(a!=2)
   {
      d++;
      a++;
      
   }
}
if(b>2)
{
   while(b!=2)
   {
      d++;
      b--;
   
   }
}
else if(b<2)
{
   while(b!=2)
   {
      d++;
      b++;
      
   }
}
 
 
 
cout << d;
 
}
