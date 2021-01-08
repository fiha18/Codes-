
// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function that returns true if sub-string 
// s[0...k] is repeated a number of times 
// to generate string s 
int check(string s, int k) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (s[i] != s[i % k]) 
            return false; 
  
    return true; 
} 

int GCDString(string a, string b) 
{ 
    int ct = 0; 
    int n = a.size(), m = b.size(); 
    for (int i = 1; i <= min(n, m); i++) { 
        if (n % i == 0 && m % i == 0) 
 
            if (a.substr(0, i) == b.substr(0, i)) 
                if (check(a, i) && check(b, i)) 
                    ct++; 
    }
    if (ct == 1)
    {
        return min(n,m);
    }
    if (ct == 0)
    {
        return -1;
    }
    return ct;
} 
  
// Driver code 
int main() 
{ 
    string a = "abcde", b = "de"; 
  
    cout << GCDString(a, b); 
  
    return 0; 
} 
