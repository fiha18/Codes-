#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a,long long b)
{
	if (b==0)
	{
			return a;
	}
	else
		gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
	if (gcd(a,b)!=0)
	{
		return (a*b)/gcd(a,b);
	}
	else
		return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
	{	
		long long a,b;
		cin >> a >> b;
		long long res = gcd(a,b);
		long long res2 = lcm(a,b);
		cout << res << " " << res2 <<endl;
	}
		return 0;
}