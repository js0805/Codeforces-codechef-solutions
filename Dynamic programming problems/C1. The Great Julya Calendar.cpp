//https://codeforces.com/problemset/problem/331/C1
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
using ll = long long;
int solve(ll n) 
{
    if(n==0)
        return 0;
	priority_queue <int> p;
	int num=n;
	while(n)
	{
	    p.push(n%10);
	    n=n/10;
	}
	return 1+solve(num-p.top());
}
int main()
{
    ll n;
	cin >> n;
	
	cout<<solve(n);
	
	return 0;
}
