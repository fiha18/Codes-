#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string leftShift(string s,int d)
{
	reverse(s.begin(), s.begin()+d);
	//cout << s << endl;
	reverse(s.begin()+d, s.end());
	//cout << s << endl;
	reverse(s.begin(), s.end());
	return s;

}
string rightShift(string s,int d)
{
	int n = s.size();
	reverse(s.begin()+n-d, s.end());
	reverse(s.begin(), s.begin()+n-d);
	reverse(s.begin(), s.end());
	return s;

}
int main()
{
	string s;
	vector<vector<int> > v;
	getline(cin,s);
	/*int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int dir,val;
		cin >> dir;
		v[i][0] = dir;
		cin >> val;
		v[i][1] = val;
	}
	int cnt_0=0,cnt_1=0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i][0]==0)
		{
			cnt_0 =+ v[i][1];
		}
		else
			cnt_1 =+ v[i][1];
	}*/
		s = rightShift(s,1);
	s = rightShift(s,1);
	s = leftShift(s,2);
	s = rightShift(s,3);
	cout << s << endl;
	return 0;
}