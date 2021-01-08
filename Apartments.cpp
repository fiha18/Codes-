#include<bits/stdc++.h> 
#include <string>
using namespace std; 
  
#define MAX 1005 
int shortestSeq(char *S, char *T) 
{ 
    int m = strlen(S), n = strlen(T); 
    int dp[m+1][n+1]; 
  
    for (int i = 0; i <= m; i++) 
        dp[i][0] = 1; 
  
    for (int i = 0; i <= n; i++) 
        dp[0][i] = MAX; 
  
    for (int i = 1; i <= m; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            char ch = S[i-1]; 
            int k; 
            for (k = j-1; k >= 0; k--) 
                if (T[k] == ch) 
                    break; 
              if (k == -1) 
                dp[i][j] = 1; 
            else
               dp[i][j] = min(dp[i-1][j], dp[i-1][k] + 1); 
        } 
    } 
  
    int ans = dp[m][n]; 
    if (ans >= MAX) 
        ans = -1; 
  
    return ans; 
} 
   

int solve(string S,string V)
{
int m = S.length();
int n = V.length();
char S_arr[m+1];
char V_arr[n+1];
strcpy(S_arr, S.c_str());
strcpy(V_arr, V.c_str());
int ans = shortestSeq(S_arr,V_arr); 
if(ans > MAX)
    return -1;
else
    return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	string S,V;
	cin >> S;
	cin >> V;
	int ans = solve(S,V);
	cout << ans << endl;

	return 0;
}