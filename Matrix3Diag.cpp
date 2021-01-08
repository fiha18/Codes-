#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int A[N][N];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			int x;
			cin >> x;
			A[i][j] = x;
		}
	}

	cout << "3 Diagonal" << endl;
	for (int i = 0; i < N-1; ++i)
	{
		cout << A[i+1][i]<<" ";
	}
	for (int i = 0; i < N; ++i)
	{
		cout << A[i][i]<<" ";
	}
	for (int i = 0; i < N-1; ++i)
	{
		cout << A[i][i+1]<<" ";
	}
	cout << endl;
	 cout << "Z shape" << endl;
	for (int i = 0; i < N; ++i)
	{
		cout << A[0][i]<<" ";	
	}
	for (int i = 1; i < N-1; ++i)
	{
		cout <<A[i][N-i]<<" ";	
	}
	for (int i = 0; i < N; ++i)
	{
		cout << A[N-1][i]<<" ";	
	}
	return 0;
}