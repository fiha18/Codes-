#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long Fib[10000];
long long mod = 1000000007;
void Encoding(long long n,vector<int> Arr)
{
int i = 1;
while(Fib[i] <= n)
{
	i++;
}
int t = i-2;
Arr[t+1] = 1;
Arr[t] = 1;
n = n - Fib[i];
cout << n;
while(n!=0)
{
	while(Fib[i] <= n)
		{
			i++;
	t = i-2;
	Arr[t] = 1;
	n = n - Fib[i];
}
}
/*long long Decoding(int Arr[])
{

}*/
int main()
{
	Fib[0] = 0;
	Fib[1] = 1;
	Fib[2] = 1;
	for (long long i = 3; i <=100; ++i)
	{
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	cout << 1 <<endl;
	long long n;
	vector<int> v(100,0);
	cin >>n;
	Encoding(n,v);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}