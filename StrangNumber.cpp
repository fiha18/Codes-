#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		long x,k;
		cin >> x >>k;
		if(k==1 && x!=1)
		{
			cout << 1 <<endl;
		}
		else if (k%2 == 0)
		{
			if ((x%2==0) && (x >= 2*k))
			{
				cout << 1 <<endl;
			}
			else
				cout << 0 <<endl;
		}
		else if (k%2 == 1)
		{
			if(((x-2)%2==0) && ((x-2) >= 2*k))
			{
				cout << 1 <<endl;
			}
			else
				cout << 0 <<endl;
		}
	}
	return 0;
}