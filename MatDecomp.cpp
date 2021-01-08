#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
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
		int n;
		long a;
		cin >> n >> a;
		long long sum ;
		long long m =1000000007 ;
		sum = 0;
		long long  p,p_prev;
		int i =1;
		p_prev = a;
		while(i!=n+1)
		{
			p = binpow(p_prev,(2*i - 1),m);
			//cout << p << endl;
			p_prev = (p*p_prev)%m;
			//cout << p << endl;
			sum = sum + (p % m); 
			i++;
		}
		cout << sum%m << endl;
	}	
	return 0;
}