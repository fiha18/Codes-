#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char Str[n];
	char x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		Str[i] = x;
	}
	int cnt = 0, chr = 0;
	char Str2[20];
	char c;
	for (int i = 0; i < n; ++i)
	{
		if (cnt == 0)
		{
			Str2[chr] = Str[i];
			cnt +=1;
		}
		if (Str[i]==Str[i+1])
		{
			cnt +=1;
			continue;
		}
		else
			c = '0'+cnt;
			Str2[chr+1] = c;
			chr+=2;
			cnt = 0;
	}
	cout << chr << endl;
	for (int i = 0; i < chr; ++i)
	{
		cout << Str2[i];
	}
	return 0;
}