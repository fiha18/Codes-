#include <iostream>
using namespace std;

int mpower(int b,int n,int m)
{
	if(n==0)
		return 1;
	if (n%2)
	{
		return (((mpower(b,n/2,m)*mpower(b,n/2,m))%m)*(b%m))%m;
	}
	else
		return mpower(b,n/2,m)*mpower(b,n/2,m)%m;
 return 0;
}
int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b % a,a);
	return 0;
}
int fib(int n)
{
	//int A[n]={0};
	if (n==0||n==1)
	{
		//A[0]=A[1]=1;
		return 1;
	}
	else
		return fib(n-2) + fib(n-1);
	return 0;
}
int main()
{

	int n;
	cin >> n; 
	int res = fib(n);
	cout << res;
	return 0;
}