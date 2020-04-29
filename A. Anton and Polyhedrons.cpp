// https://codeforces.com/problemset/problem/785/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
int sum=0;
for(int i=0;i<=t;i++)
{
   string s;
   getline(cin,s);
   
   if(s =="Tetrahedron")
   {
      sum  = sum+ 4;
   }
   else if(s == "Cube")
   {
      sum = sum +6;

   }
   else if(s == "Octahedron")
      sum+=8;
   else if(s=="Dodecahedron")
      sum+=12;
   else if(s=="Icosahedron")
      sum+=20;
}

cout << sum;

}
