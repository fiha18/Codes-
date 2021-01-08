#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int chartoint(char c)
{
	int t;
	switch(c)
	{
		case 'a': t = 0;
				  break;
		case 'b': t = 1;
				  break;
		case 'c': t = 2;
				  break;
		case 'd': t = 3;
				  break;
		case 'e': t = 4;
				  break; 
		case 'f': t = 5;
				  break;
		case 'g': t = 6;
				  break;
		case 'h': t = 7;
				  break;
		case 'i': t = 8;
				  break;
		case 'j': t = 9;
				  break;
		case 'k': t = 10;
				  break;
		case 'l': t = 11;
				  break;
		case 'm': t = 12;
				  break;
		case 'n': t = 13;
				  break;
		case 'o': t = 14;
				  break;
		case 'p': t = 15;
				  break;
		case 'q': t = 16;
				  break;
		case 'r': t = 17;
				  break;
		case 's': t = 18;
				  break;
		case 't': t = 19;
				  break;
		case 'u': t = 20;
				  break;
		case 'v': t = 21;
				  break;
		case 'w': t = 22;
				  break;
		case 'x': t = 23;
				  break;
		case 'y': t = 24;
				  break;
		case 'z': t = 25;
				  break;
		}
	return t;
}
int ansToQueries(vector<int> v, int q)
{
	int res = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		if ((v[i] - q) > 0)
		{
			res = res + (v[i] - q);
		}
	}
	return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,q;
		cin >> n >> q;
		string str;
		cin >> str;
		vector<char> s(str.begin(), str.end());
		//cout << str[0] <<endl;
		vector<int> charcnt(26,0);
		for (int i = 0; i < n; ++i)
		{
			char c = s[i];
			int z = chartoint(c);
			charcnt[z]++;
		}
		sort(charcnt.begin(), charcnt.end());
		vector<int> queries;
		for (int i = 0; i < q; ++i)
		{
			int x;
			cin >> x;
			queries.push_back(x);
		}
		for (int i = 0; i < q; ++i)
		{
			int temp = queries[i];
			int res ;
			res = ansToQueries(charcnt,temp);
			cout << res << endl;
		}
	}
	return 0;
}