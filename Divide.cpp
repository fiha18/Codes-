#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
	 int sign =(dividend>0)==(divisor>0)?1:-1;
        if (dividend==INT_MIN){
            if (divisor==-1) return INT_MAX;
            if (divisor==1) return INT_MIN;
            if (divisor==INT_MIN) return 1;
            return divide(dividend+abs(divisor),divisor)+sign;
        }
        if (divisor==INT_MIN){
            return 0;
        }
        if (dividend==INT_MAX){
            if (divisor==-1) return INT_MIN+1;
            if (divisor==1) return INT_MAX;
            if (divisor==INT_MAX) return 1;
            return 1+divide(dividend-divisor,divisor);
        }
        if(divisor==0)
            return 0;
        if( dividend>=0 && divisor>0 )
        {
            if((dividend-divisor)<0)
                return 0;
            else
                return 1 + divide(dividend-divisor,divisor);
        }
        if( dividend<=0 && divisor<0 )
        {
           if((dividend-divisor)>0)
               return 0;
            else
                return 1 +  divide(dividend-divisor,divisor);
        }
       if( dividend<=0 && divisor>0 )
       {
        if((dividend+divisor)>0)
            return 0;
        else
            return -1 + divide(dividend+divisor,divisor);
       }
        else
        {
         if((dividend+divisor)<0)
             return 0;
        else
           return -1 + divide(dividend+divisor,divisor);
        }
    }
int main()
{
	int a,b;
	cin >> a >> b;
	cout  << divide(a,b);
	return 0;
}