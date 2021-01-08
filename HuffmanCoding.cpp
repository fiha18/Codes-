#include <bits/stdc++.h> 
using namespace std; 
  
struct Node
{
	int freq;
	struct Node* left,right;
};

void Min_Heapify(vector<int> A, int i)
{
	int l,r,smallest;
	l = 2*i;
	r = 2*i + 1;
	if (l <= A.length() && A[l] < A[i])
	{
		smallest = l;
	}
	else
		smallest = i;
	if (r <= A.length() && A[r] < A[smallest])
	{
		smallest = r;
	}
	if (i != smallest)
	{
		int temp;
		temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;
		Min_Heapify(A,smallest);
	}
}
void build_Min_Heap(vector<int> A)
{
	for (int i = floor(A/2); i >=1 ; --i)
	{
		Min_Heapify(A,i);
	}
}

void Extract_Min(vector<int> A)
