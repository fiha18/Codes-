#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	vector<char> str(s.begin(), s.end());
	unordered_set<char> subs;
	unordered_set<char>::iterator it;
	for (int i = 0; i < str.size(); ++i)
	{
		if (subs.find(str[i])!= subs.end())
		{
			subs.insert(str[i]);
		}
		else
		{	
			it = subs.find(str[i]);
			subs.erase(it);
			subs.insert(str[i]);
		}
	}
	for (it = subs.begin();it!=subs.end();++it)
	{
		cout << *it;
	}
	cout<<","<<subs.size()<<endl;
	return 0;
}