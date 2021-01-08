#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif*/
	int t;
	cin >> t;
	while(t--)
	{
		int t,n,b;
		cin >> n >> b;
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		vector<int> cnt(1001,0);
		for (int i = 0; i < n; ++i)
		{
			cnt[v[i]] +=1;
		}
		vector<int> vcnt;
		int i =0;
		while(i!=1001)
		{
			if(cnt[i]!= 0)
			{
				for (int j = 0; j < cnt[i]; ++j)
				{
					vcnt.push_back(i);
				}
			}
			i++;
		}
		int sum = 0; 
		for (int i = 0; i < n; ++i)
		{
			if(sum <= b)
			{
				sum += vcnt[i];
				t = i;
			}
			else
				break;
		}
		cout << t <<endl;
	}
	return 0;
}