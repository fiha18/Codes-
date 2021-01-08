#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void line_eq(long int x1, long int y1, long int x2, long int y2,long double line[])
{
	long double m,c;
	m = long double(y2 - y1)/long double(x2 - x1);
	c = y1 - m*x1;
	line[0] = m;
	line[1] = c;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int h;
		int n;
		cin >> h >> n;
		vector<int> t;
		vector<long int> x;
		vector<long int> a;
		for (int i = 0; i < n; ++i)
		{
			int tv;
			long int xv,av;
			cin >> tv >> xv >> av;
			t.push_back(tv);
			x.push_back(xv);
			a.push_back(av);
		}
		double line[2]; // make line[0] = m i.e. slope and line[1] = c i.e. intercept

	}
	return 0;
} 