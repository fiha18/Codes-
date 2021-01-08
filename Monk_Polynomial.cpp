#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
lli func(lli A,lli B,lli C,lli x)
{
    return A*x*x + B*x + C;
}
lli Prog(lli A,lli B, lli C, lli K)
{
    lli x;
    if(C >= K)
    {
        return 0;
    }
    lli lower = 1;
    lli upper = ceil(sqrt(K));
    while(upper >= lower)
    {
        lli mid = (lower + upper)/2;
        if(func(A,B,C,mid) >= K && func(A,B,C,mid - 1) < K)
        {
            x = mid;
        }
        if(func(A,B,C,mid) < K)
        {
            lower = mid + 1;
        }
        if(func(A,B,C,mid) > K)
        {
            upper = mid - 1; 
        }
    }
    return x;
}
int main()
{
    lli T;
    cin >> T;
    while(T--)
    {
        lli A,B,C,K;
        cin >> A>>B>>C>>K;
        lli x = Prog(A,B,C,K);
        cout << x;
    }   
    return 0;
}