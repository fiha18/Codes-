#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long Fib[100000];
int main()
{
	Fib[0] = 1;
	Fib[1] = 1;
	for (int i = 2; i <= 100000; ++i)
	{
		Fib[i] = Fib[i-2] + Fib[i-1];
	}
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long Sum = 0;
		int i = 1;
		while(Fib[i] <= n)
		{
			if (Fib[i]%2 ==0)
			{
				Sum += Fib[i];
			}
			i++;
		}
		cout << Sum <<endl;
	}
	return 0;
}