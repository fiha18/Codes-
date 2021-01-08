#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Heapify(vector<int>& Arr,int n,int i)
{
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;

	if (l < n && Arr[l] > Arr[largest])
	 {
	 	largest = l;
	 } 
	if (r < n && Arr[r] > Arr[largest])
	{
		largest = r;
	}

	if (largest != i)
	{
		iter_swap(Arr.begin()+i,Arr.begin()+largest);
		Heapify(Arr,n,largest);
	}
}
void buildHeap(vector<int>& Arr, int n) 
{ 

    int startIdx = (n / 2) - 1; 
    for (int i = startIdx; i >= 0; i--) { 
        Heapify(Arr, n, i); 
    } 
}


int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x ; 
		cin >> x;
		v[i] = x;
	}
	/*while(v.size() != 1)
	{
		int x,y,z;
		buildHeap(v,v.size());
		x = v[0];
		v.erase(v.begin());
		buildHeap(v,v.size());
		y = v[0];
		z = x-y;
		if (z != 0)
		{
			v.push_back(z);
		}
	}*/
	
	/*if (!v.empty())
	{
		cout << v[0] <<endl;
	}
	else	
		cout << 0 << endl;*/
	//buildHeap(v,n);
	//swap(v.front(),v.back());
	cout << v[0] << endl;	
	return 0;
}