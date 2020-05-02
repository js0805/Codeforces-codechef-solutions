//https://codeforces.com/problemset/problem/1281/A
//created by js0805
#include<bits/stdc++.h>
#include<string>
#include <algorithm> 
#include<vector>
using namespace std;
#define ll long long int
/*void solve()
{


   
   
}*/
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin >>t;
while(t+1!=0)
   {
      string s;
      getline(cin,s);
      int n = s.length();
      if(s[n-2]=='p' && s[n-1]=='o')
      cout <<"FILIPINO"<<endl;
      else if(s[n-5]=='m'&&s[n-4]=='n' && s[n-3]=='i' && s[n-2]=='d' && s[n-1]=='a')
      cout << "KOREAN" <<endl;
      else if((s[n-4]=='d' || s[n-4]=='m') && (s[n-3] =='e' || s[n-3]=='a') && s[n-2]=='s' && s[n-1] == 'u')
      cout << "JAPANESE" <<endl;
      t--;
}
}
