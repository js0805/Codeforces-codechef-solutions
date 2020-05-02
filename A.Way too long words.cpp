//https://codeforces.com/contest/71/problem/A
//created by js0805
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t;
   cin >>t;
   while(t+1!=0)
   {
      string s;
      getline(cin,s);
      int n = s.length();
      if(n<=10)
         cout <<s;
      else
      {
         cout << s[0] << n-2<< s[n-1];
      }
      cout << endl;
      t--;
   }
}
