https://codeforces.com/contest/1352/problem/A
//created by js0805
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
	ll n;
	cin >>n;
	vector<ll>a;
	while(n>0)
	{
		int j = n%10;
		a.push_back(j);
		n = n/10;
	}
	reverse(a.begin(),a.end());
	int z =0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=0)
		{
			z++;
		}
	}
	cout <<z<<"\n";
	int p = a.size();
	for(int i=0;i<p;i++)
	{
		if(a[i]!=0)
		{
			ll q = a[i]*pow(10,p-1-i);
			cout <<q << " ";
		}
	}
 
 
 
 
 cout << "\n";
 
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll t;
   cin >>t;
   for(int i=1;i<=t;i++)
     {
   solve();
     }   
}
