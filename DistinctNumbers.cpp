#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main()
{
	int n;
	cin >> n;
	set <ll> s;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size() <<  endl;
 	return 0;
}