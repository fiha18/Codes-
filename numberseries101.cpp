#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Series 1 :";
	int S1[6];
	int t1 = 2;
	S1[0] = 2;
	S1[1] = S1[0]*t1;
	for (int i = 2; i < 6; ++i)
	{
		S1[i] = S1[i-1]*S1[i-2];
	}
	for (int i = 0; i < 6; ++i)
	{
		cout << S1[i] <<" ";
	}
	cout << endl;
	cout << "Series 2 :";
	int S2[5];
	S2[0] = 2;
	for (int i = 1; i < 5; ++i)
	{
		S2[i] = S2[i-1]*i + i*i;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << S2[i] <<" ";
	}
	cout << endl;
	cout << "Series 3 :";
	int S3[5];
	S3[0] = 8;
	for (int i = 1; i < 4; ++i)
	{
		S3[i] = S3[i-1] + 11*pow(3,i-1);
	}
	S3[4] = 447;
	for (int i = 0; i < 5; ++i)
	{
		cout << S3[i] <<" ";
	}
	cout << endl;
	cout << "Series 4 :";
	int S4[7];
	S4[0] = 2;
	for (int i = 1; i < 7; ++i)
	{
		S4[i] = S4[i-1]*i + i*i;
	}
	for (int i = 0; i < 7; ++i)
	{
		cout << S4[i] <<" ";
	}
	cout << endl;
	cout << "Series 5 :";
	int S5[7];
	S5[0] = 15;
	for (int i = 1; i < 7; ++i)
	{
		S5[i] = S5[i-1] + i*i;
	}
	for (int i = 0; i < 7; ++i)
	{
		cout << S5[i] <<" ";
	}
	cout <<endl;
	cout << "Series 6 :";
	int S6[7];
	S6[0] = 49;
	for (int i = 1; i < 7; ++i)
	{
		if(i%2 == 1)
		{
			S6[i] = S6[i-1] + i*i;
		}
		if (i%2 == 0)
		{
			S6[i] = S6[i-1] - i*i;
		}
	}
	for (int i = 0; i < 7; ++i)
	{
		cout << S6[i] <<" ";
	}
	/*cout << "Series 5 :";
	int S5[7];
	S5[0]= 15;
	for (int i = 1; i < 7; ++i)
	{
		S5[i] = S5[i-1] + i*i;
	}
	for (int i = 0; i < 7; ++i)
	{
		cout << S5[i] <<" ";
	}*/
	cout << endl;
	return 0;
}