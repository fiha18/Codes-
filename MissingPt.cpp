#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		/*multiset<ll> X;
		multiset<ll> Y;
		for (ll i = 0; i < (4*n - 1); ++i)
		{
			ll x,y;
			cin >> x >> y;
			X.insert(x);
			Y.insert(y);
		}
		ll ans_x,ans_y;
		multiset<ll>::iterator it_x,it_y;
		for (it_x= X.begin(); it_x!=X.end(); (it_x++)++)
		{
			if (*it_x != *(it_x++))
			{
				ans_x = *it_x;
			}
			else
				continue;
			it_x--;

		}
		for (it_y = Y.begin(); it_y!=Y.end(); (it_y++)++)
		{
			if (*it_y!= *(it_y++))
			{
				ans_y = *it_y;
			}
			else
				continue;
			it_y--;

		}*/
		vector<ll> X;
		vector<ll> Y;
		for (ll i = 0; i < (4*n - 1); ++i)
		{
			ll x,y;
			cin >> x >> y;
			X.push_back(x);
			Y.push_back(y);
		}
		sort(X.begin(), X.end());
		sort(Y.begin(), Y.end());
		ll ans_x,ans_y;
		for (ll i = 0; i < X.size() ; i+=2)
		{
			if (X[i] != X[i+1]) 
			{
				ans_x = X[i];
				break;
			}
			else
				continue;
		}
		for (ll i = 0; i < Y.size() ; i+=2)
		{
			if (Y[i] != Y[i+1]) 
			{
				ans_y = Y[i];
				break;
			}
			else
				continue;
		}
		cout << ans_x <<" "<<ans_y<<endl;
	}
	return 0;
}