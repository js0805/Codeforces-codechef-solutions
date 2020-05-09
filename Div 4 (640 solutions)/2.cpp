#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
void solve()
{
	ll n,k;
	cin >>n>>k;
	ll a,b;
	a = k/(n-1);
	b = k%(n-1);
	ll ans = n*a + b;
	if(n==k)
	{
		cout <<n+1;
			}
	else if(k<n)
		cout << k;
	
	else if(b==0)
	{
		ans--;
		cout << ans;
	}
	else
cout << ans;
	
	
cout <<"\n";
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
