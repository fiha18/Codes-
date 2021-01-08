#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long dp[50][2][2];
long long mod = 1000000007;
long long binexp(long long a,long long b)
{
	if (b==0)
	{
		return 1;
	}
	long long res = binexp(a,b/2);
	if (b%2)
	{
		return res*res*a%mod;
	}
	else
		return res*res%mod;

}
void multiply(long long mat1[][2],  
              long long mat2[][2],  
              long long res[][2]) 
{ 
    long long i, j, k; 
    for (i = 0; i < 2; i++) 
    { 
        for (j = 0; j < 2; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 2; k++) 
                res[i][j] = (res[i][j]%mod + (((mat1[i][k])%mod)*  
                             ((mat2[k][j])%mod))%mod)%mod;
            	/*x = (mat1[i][k]%mod*mat2[k][j]%mod)%mod; 
                res[i][j] = (res[i][j]+x)%mod;*/
        } 
    } 
} 
long long matExp(long long n)
{
	long long t = log2(n-1);
	long long BitArr[t+1] ;
	for (int i = 0; i < t+1; ++i)
	{
		BitArr[i] = 0;
	}
	long long m = t;
	long long x =(n-1) - binexp(2,t);
	BitArr[m] = 1;
	while(m>=0)
	{	
		if (x == 0)
			{
				break;
			}	
		m = log2(x);
		BitArr[m] = 1;
		x = x - binexp(2,m);
		if (m ==0)
		{
			break;
		}
	}
	long long Mat[2][1];
	long long iden[2][2] = {{1,0},{0,1}};
	long long temp[2][2];
	for (int i = 0; i < t+1; ++i)
	{
		if (BitArr[i]==1)
		{
			temp[0][0] =  temp[0][1] =  temp[1][0] =  temp[1][1] = 0;
			multiply(dp[i],iden,temp);
			iden[0][0] = temp[0][0];
			iden[0][1] = temp[0][1];
			iden[1][0] = temp[1][0];
			iden[1][1] = temp[1][1];
		}
	}
	Mat[0][0] = (temp[0][0]%mod + temp[0][1]%mod)%mod;
	return Mat[0][0];
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	dp[0][0][0] = 1;
	dp[0][0][1] = 1;
	dp[0][0][2] = 1;
	dp[0][0][3] = 0;
	for (long long i = 1; i < 50; ++i)
	{
		multiply(dp[i-1],dp[i-1],dp[i]);
	}
	int t;
	cin >> t;
	while(t--)
	{
	long long n,res;
	cin >> n;
	res = matExp(n);
	cout << res << endl;
	}
	
	return 0;
}