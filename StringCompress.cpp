#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string sequence;
	int i=0,j=0;
	cin >> sequence;
	while(sequence[i]!='\0')
	{
		int cnt = 0;
		j=i;
		while(sequence[j]==sequence[i])
		{
			cnt++;
			j++;
		}
		sequence.erase(i+1,cnt);
		char c = cnt;
		sequence.insert(i+1,c);
		i=j;
		cnt =0;

	}
	cout << sequence;
	return 0;
}