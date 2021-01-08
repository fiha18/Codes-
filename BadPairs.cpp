#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pairs;
int main()
{
	vector<int> v;
	int n,k;
	cin >>n>>k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	set<pairs> s;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (v[i]%v[j]==k)
			{
				pairs x = make_pair(i,j);
				s.insert(x);
			}
		}
	}
	/*set<pairs> :: iterator it;
	for(it=s.begin(); it != s.end(); ++it) 
       {
       	cout << '(' << (*it).first << "," << (*it).second <<")"<<" " ; 
       }*/
	set<pairs> res;
	set<pairs> :: iterator it;
	for(it=s.begin(); it != s.end(); ++it) 
       {
       	int i,j;
       	i = (*it).first;
       	j = (*it).second;
    	for (int k = 0;k < i;++k)
    	{
    		pairs x = make_pair(k,j);
    		res.insert(x);
    	}
    	for (int k = j;k < n;++k)
    	{
    		pairs x = make_pair(i,k);
    		res.insert(x);
    	}
    	pairs y = make_pair(i,j);
    	s.insert(y);
       	//cout << '(' << (*it).first << "," << (*it).second <<")"<<" " ; 
       }
    set<pairs> :: iterator it1;
	for(it1=res.begin(); it1!= res.end(); ++it1)
	{
	cout << '(' << (*it1).first << "," << (*it1).second <<")"<<" " ; 		
	} 
	return 0;
}