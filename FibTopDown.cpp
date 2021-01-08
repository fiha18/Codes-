#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if (n==0||n==1)
	{
		return n;
	}
	else
		return fib(n-1)+fib(n-2);
}
int topDownFib(int n,int* dp)  // Recursive and Memoization
{
	if (n==0|n==1)
	{
		dp[n] = n;
		return dp[n];
	}
	if (dp[n]!=-1)
	{
		return dp[n];
	}
	else
	{
		dp[n] = topDownFib(n-1,dp)+topDownFib(n-2,dp);
		return dp[n];
	}
}
int main()
{
	int dp[100];
	time_t start1,end1,start2,end2;
	for (int i = 0; i < 100; ++i)
	{
		dp[i] = -1;
	}
	time(&start1);
	cout << fib(40) << endl;
	time(&end1);
	time(&start2);
	cout << topDownFib(50,dp) << endl;
	time(&end2);
	double time1,time2;
	time1 = double(end1 - start1);
	time2 = double(end2 - start2);
	cout << "time 1 : " << time1 <<endl;
	cout << "time 2 : " << time2 <<endl;
	return 0;
}