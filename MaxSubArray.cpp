#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n ; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	int max = v[n-1];
	cout << max << " ";
	for (int i = n-2 ; i >=0;i--)
	{
		if (v[i]>max)
		{
			max = v[i];
			cout << max << " ";
		}
	}
	return 0;
}