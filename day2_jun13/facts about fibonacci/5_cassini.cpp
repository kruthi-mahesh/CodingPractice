// C++ implementation to demonstrate working
// of Cassini’s Identity 
#include<bits/stdc++.h>
using namespace std;
 
// Returns (-1)^n
int cassini(int n)
{
   return (n & 1) ? -1 : 1;
} 
 
// Driver program
int main()
{  
   int n = 5;
   cout << cassini(n);
   return 0;
} 

/* cassini identity is
 Value of f(n-1)*f(n+1) – f(n)*f(n) is (-1)n.