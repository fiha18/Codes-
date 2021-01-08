#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t)
	{
		long int n,q;
		cin >> n >> q;
		vector<long int> f;
		vector<long int> d;
		for (long int i = 0; i < q; ++i)
		{
			long int fv,dv;
			cin >> fv;
			f.push_back(fv);
			cin >> dv;
			d.push_back(dv);
		}
		long int sum;
		sum  = abs(f[0] - 0) + abs(f[0] - d[0]);
		//cout << sum <<endl;
		for (long int i = 1; i < q; ++i)
		{
			sum = sum + (abs(d[i-1] - f[i]) + abs(f[i] - d[i]));
		}
		cout << sum << endl;
		t--;
	}
	return 0;
}