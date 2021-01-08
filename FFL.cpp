#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,s;
		cin >> n >> s;
		vector<int> p;
		vector<int> q;
		vector<int> x;
		//vector<int> y;
		int t = 100 - s;
		for (int i = 0; i < n; ++i)
			{
				int x;
				cin >> x;
				p.push_back(x);
			}
		for (int i = 0; i < n; ++i)
			{
				int z;
				cin >> z;
				x.push_back(z);
			}
		vector<int>::iterator it = p.begin();
		for (int i = 0; i < n; ++i)
		{
			if (x[i]==0)
			{
				q.push_back(p[i]);
				
			}
		}
		cout << endl;
		for (int i = 0; i < p.size(); ++i)
			{
				cout << p[i] << " ";	
			}
		for (int i = 0; i < q.size(); ++i)
			{
				cout << q[i] << " ";	
			}
		/*int cnt = 0;
		int i,j;
		i = 0;
		j = n-1;

		if (cnt == 1)
		{
			cout << "yes" << endl;
		}
		else
			cout << "no" <<	endl;*/
	}
	return 0;
}