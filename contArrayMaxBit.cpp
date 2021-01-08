#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x ;
		cin >> x;
		v.push_back(x);
	}
	int i,j,max_lenG = 0;
	for (int i = 0; i < n; ++i)
	{
		int cnt0,cnt1,max_lenL;
		cnt0 = cnt1 = 0;
		if (v[i] == 0)
		{
			cnt0 +=1;
		}
		else
			cnt1 +=1;
		for (int j = i+1; j < n; ++j)
		{
			if (v[j]==0)
			{
				cnt0++;
			}
			else
				cnt1++;
			if (cnt0 == cnt1)
			{
				//max_lenL = 0;
				max_lenL = cnt0 + cnt1;
			}
		}
		if (max_lenL > max_lenG)
		{
			max_lenG  = max_lenL;
		}
	}
	cout << max_lenG << endl;
	return 0;
}