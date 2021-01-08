#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long dp[100001] = { 0 } ;
long long stairRec(long long N)
{
	if(N<=2)
	{
		return N;
	}
	long long res = 0;
	res+=stairRec(N-1);
	res+=stairRec(N-2);

	return res;
}

long long stairDP(long long N)
{
	if(N<=2)
	{
		return N;
	}
	if (dp[N]!= 0)
	{
		return dp[N];
	}
	dp[N] = stairDP(N-1) + stairDP(N-2);
	return dp[N];
}

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	long long n,res1,res2;
	cin >> n;
	//res1 = stairRec(n);
	res2 = stairDP(n);
	//cout << res1 << endl;
	cout << res2 << endl;
	return 0;
}