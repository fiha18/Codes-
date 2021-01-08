#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string Capitalize_first_letter(string str) {

	for (int x = 0; x < str.length(); x++)
	{
		if (x == 0)
		{
			str[x] = toupper(str[x]);
		}
		else if (str[x - 1] == ' ')
		{
			str[x] = toupper(str[x]);
		}
	}
}
int main()
{
	/*int len;
	cin >> len;
	char str[len];
	for (int i = 0; i < len; ++i)
	{
		char x;
		cin >> x;
	}
	int Vow_cnt[5];
	for (int i = 0; i < 5; ++i)
	{
		Vow_cnt[i] = 0;
	}
	for (int i = 0; i < len; ++i)
	{
		if(str[i] == 'a'|| str[i] == 'A')
		{
			Vow_cnt[0]++;
		}
		if(str[i] == 'e'|| str[i] == 'E')
		{
			Vow_cnt[1]++;
		}
		if(str[i] == 'i'|| str[i] == 'I')
		{
			Vow_cnt[2]++;
		}
		if(str[i] == 'o'|| str[i] == 'O')
		{
			Vow_cnt[3]++;
		}
		if(str[i] == 'u'|| str[i] == 'U')
		{
			Vow_cnt[4]++;
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		if(Vow_cnt[i]>0)
		{
			if(i == 0)
				cout << "a/A count :" << Vow_cnt[i] << endl;
			if(i == 1)
				cout << "e/E count :" << Vow_cnt[i] << endl;
			if(i == 2)
				cout << "i/I count :" << Vow_cnt[i] << endl;
			if(i == 3)
				cout << "o/O count :" << Vow_cnt[i] << endl;
			if(i == 4)
				cout << "u/U count :" << Vow_cnt[i] << endl;
			
		}
	}*/
	cout << Capitalize_first_letter("happy new year guys");
	
}

/*int alpha[26] = {0};
	int cnt = 0;
	int n = str.size();
	for(i = 0;i<n;i++)
	{
	 alpha[(int)str[i] - 97]++;
	}
	for(i = 0; i< 26 ; i++)
	{
		if(alpha[i]!= 0)
		{
			cnt++;
		}
	}*/
