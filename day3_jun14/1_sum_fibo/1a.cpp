// C++ Program to find sum of Fibonacci numbers in 
// O(Log n) time.
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;
 
// Create an array for memoization
int f[MAX] = {0};
 
// Returns n'th Fibonacci number using table f[]
int fib(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    // If fib(n) is already computed
    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;
 
    // Applying above formula [Note value n&1 is 1
    // if n is odd, else 0].
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}
 
// Computes value of first Fibonacci numbers
int calculateSum(int n)
{
    return fib(n+2) - 1;
}
 
// Driver program to test above function
int main()
{
    int n = 4;
    cout << "Sum of Fibonacci numbers is : "
         << calculateSum(n) << endl;
    return 0;
}

/*
 O(log n) time 

soln:

S(n) = F(n+2) – 1

proof:
We can rewrite the relation F(n+2) = F(n+1) + F(n) as below
F(n)    =   F(n+2) - F(n+1)

Similarly,
F(n-1)    = F(n+1)  -  F(n)

F(n-2)    = F(n)    -  F(n-1)
.          .           .
.          .             .
.          .             .
F(0)      = F(2)    -  F(1)
------------------------------- 
Adding all the equations, on left side, we have
F(0) + F(1) + … F(n) which is S(n).
S(n) = F(n+2) - F(1)
    = F(n+2)  - 1; 
*/