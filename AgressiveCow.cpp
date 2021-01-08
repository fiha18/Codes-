#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
lli Ar[1000001];
bool isValid(lli mid, lli C, lli N)
{
	lli cnt = 0;
	lli pre = -INT_MAX;
	for (int i = 0; i < N; ++i)
	 {
	 	if (Ar[i]-pre >= mid)
	 	{
	 		cnt++;
	 		pre = Ar[i];
	 	}
	 }
	 if (cnt >= C)
	 	return true;
	 else
	 	return false;
}
lli Ans(lli C,lli N)
{
	lli L = 0;
	lli R = Ar[N-1] - Ar[0];
	lli ans = 0;
	while(L <= R)
	{
		lli mid = (L+R)/2;
		if (isValid(mid,C,N) && isValid(mid - 1,C,N))
		{
			ans = max(ans,mid);
			L = mid + 1;
		}
		else
			R = mid - 1;
	}
	return ans;
}
int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		lli N,C;
		cin >> N >> C;
		for (int i = 0; i < N; ++i)
		{
			lli x;
			cin >> x;
			Ar[i] = x;
		}
		lli ans = Ans(C,N);
		cout << ans << endl;
	}
	return 0;
}