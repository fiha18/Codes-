#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
string st;
int isValid(int k)
{
	int ar[4] = {0};
	for (int i = 0; i < k-1; ++i)
	{
		int idx = st[i] - '0';
		ar[idx]++;
	}
	for (int i = k-1; i < st.length(); ++i)
	{
		int idx = st[i] - '0';
		ar[idx]++;

		if (ar[1] > 0 && ar[2] > 0 && ar[3] > 0)
		{
			return 1;
		}
		idx = st[i-k+1] - '0';
		ar[idx]--;
	}
	return 0;
}
int Ans()
{
	int res = INT_MAX;
	int L = 3;
	int R = st.length();
	while(R >= L)
	{
		int mid = (L+R)/2;
		if (isValid(mid))
		{
			res = min(mid,res);
			R = mid - 1;
		}
		else
			L = mid + 1;
	}
	if (res == INT_MAX)
	{
		return 0;
	}
	else
		return res;
} 
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		cin >> st;
		int res = Ans(); 
		cout <<res;
		cout << endl;
	}
	return 0;
}