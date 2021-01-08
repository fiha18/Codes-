/*There are N Balloons marked with value Bi (where B(i…N)).
User will be given Gun with N Bullets and user must shot N times.
When any balloon explodes then its adjacent balloons becomes next to each other.
User has to score highest points to get the prize and score starts at 0.
Below is the condition to calculate the score.
When Balloon Bi Explodes then score will be a product of Bi-1 & Bi+1 (score = Bi-1 * Bi+1).
When Balloon Bi Explodes and there is only left Balloon present then score will be Bi-1.
When Balloon Bi Explodes and there is only right Balloon present then score will be Bi+1.
When Balloon Bi explodes and there is no left and right Balloon present then score will be Bi.*/
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int dp[100][100];
int max_Score(int arr[],int N)
{
	for (int len = 1; len <= N ; ++len)
	{
		for (int i = 0; i <= N - len ; ++i)
		{
			int j = i + len - 1;

			for (int k = i; k <= j; ++k)
			{
				int left_val = 1;
				int right_val = 1;
				if (i != 0)
				{
					left_val = arr[i - 1];
				}
				if (j != N-1)
				{
					right_val = arr[j + 1];
				}
				int before = 0;
				int after = 0;
				if (k != i)
				{
					before = dp[i][k-1];
				}
				if (k != j)
				{
					after = dp[k+1][j];
				}
				dp[i][j] = max(left_val*right_val + before + after, dp[i][j]);
			}
		}
	}
	return dp[0][N - 1];
}
int main()
{
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			dp[i][j] = 0;
		}
	}
	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;
		arr[i] = x;
	}
	int Ans = max_Score(arr, N);
	cout << Ans;
	return 0;
}