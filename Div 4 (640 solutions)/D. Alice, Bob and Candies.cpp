//https://codeforces.com/contest/1352/problem/D
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
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	ll l=0,h=n-1,ls =0,rs=0,m =0,as=0,bs=0;
	while(l<=h)
	{
		m++;
		if(m%2!=0)
		{as=0;
			while(as<=bs && l<=h)
			{
				//cout << 0 << " ";
				as = as + a[l++];
				
				
				//cout <<0 <<"->"<< ls << "\n";
			}
			ls+=as;
			
		}
		else
		{bs=0;
			while(as>=bs && l<=h)
			{
				//cout << 1 << " ";
				bs = bs + a[h--];
			
				//cout << 1<<"->" <<rs << "\n";
				

			}
			rs +=bs;
		}
			}
	//cout << endl;
	cout << m <<" "<< ls << " "<< rs;
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
