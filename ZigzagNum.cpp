#include <iostream>
using namespace std;

int main()
{
	
	int n,i,j,t;
	cin >> n;
	t = 1;
	for (i = 0; i < n; ++i)
	{
		t = t+i;
		for (j = 0; j <( i+1) ; j++)
		{
			if (i%2==0)
			{
				cout << t + (i-j) << "	";
			}
			else
				cout << t + j << "	"; 
		}
		cout << endl ;
		cout << endl ;
	}
	return 0;
}