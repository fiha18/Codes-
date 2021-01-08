#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumOfDigit(ll n)
{
	ll sum = 0;
	while(1)
	{
		if(n == 0)
			break;
		sum = sum + (n%10);
		n 	= n/10;
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		vector<ll> A;
		vector<ll> B;
		for (int i = 0; i < n; ++i)
		{
			ll x,y;
			cin >> x >> y;
			A.push_back(x);
			B.push_back(y);
		}
		ll A_point = 0,B_point = 0;
		for (int i = 0; i < n; ++i)
		{
			ll power_A,power_B;
			power_A = sumOfDigit(A[i]);
			power_B = sumOfDigit(B[i]);
			if (power_A > power_B)
			{
				A_point++;
			}
			else if(power_B > power_A)
			{
				B_point++;
			}
			else
			{
				A_point++;
				B_point++;
			}
		}
		if (A_point > B_point)
		{
			cout << 0 <<" "<<A_point<<endl;
		}
		else if (B_point > A_point)
		{	
			cout << 1 <<" "<<B_point<<endl;
		}
		else
			cout << 2 <<" "<<A_point<<endl;
	}
	return 0;
}