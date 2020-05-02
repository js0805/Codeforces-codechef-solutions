// https://codeforces.com/contest/791/problem/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
using namespace std;
void solve()
{
   int a,b;
   cin >>a>>b;
   int d=0;
   
   while(a<b)
   {
      a*=3;
      b*=2;
      d++;
   }
   if(a==b)
   {
      d++;
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


//created by AA

#include<bits/stdc++.h>
#include<math.h>
#include <algorithm> 
using namespace std;
void solve()
{
   int a,b;
   cin >>a>>b;
   double d;
   double h = (double)b/a;
  
   double lg = (log (h))/(log(1.5));
   double diff = lg-floor(lg);
   if(diff == 0.0)
   d = ceil(lg)+1;
   else
   d = ceil(lg);
    cout << d;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
