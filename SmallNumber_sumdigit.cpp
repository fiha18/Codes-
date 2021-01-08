#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
long long int Term_k(long long int k)
{
    long long int t = ((k-1)*k)/2 , res = 1;
    for(int i = 1; i<=k ; i++)
    {
        res*=(t+i);
    }
    return res;
}
int main() {
	//code
	int T;
	cin >> T;
	while(T)
	{
	    long long int N,sum;
	    cin >> N;
	    sum = 0;
	    for(long long int i = 1;i<=N;i++)
	    {
	        sum += Term_k(i);
	    }
	    cout << sum <<endl;
	    T--;
	}
	return 0;
}