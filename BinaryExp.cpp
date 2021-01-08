#include <iostream>
using namespace std ;

long long binexp(long long a,long long b)
{
	if (b==0)
	{
		return 1;
	}
	long long res = binexp(a,b/2);
	if (b%2)
	{
		return res*res*a;
	}
	else
		return res*res;

}
int main()
{
	long long a,b,result;
	cin >> a >>b;
	result = binexp(a,b);
	cout << result;
	return 0;
}