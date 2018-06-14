/*You will be given two positive numbers M and N.
 Your task is to print the greatest common divisor of Fib(M) and Fib(N) 
 print the value of gcd( Fib(M), Fib(N) ) modulo 100.
 Constraints:

1 ≤ T ≤ 1000

1 ≤ M, N ≤ 1000


Example:

Input

2
3 6
7 8

Output

2
1
Explanation:

Fib(3) = 2 and Fib(6) = 8

GCD(2,8)%100 = 2

Fib(7) = 13 and Fib(8) = 21

GCD(13,21)%100 = 1
*/


// C++ Program to find GCD of Fib(M) and Fib(N)
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;
 
// Create an array for memoization
int f[MAX] = {0};
 
// Returns n'th Fibonacci number using table f[]. 
// Refer method 6 of below post for details.
// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
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
 
    // Applying recursive formula [Note value n&1 is 1
    // if n is odd, else 0.
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}
 
// Function to return gcd of a and b
int gcd(int M, int N)
{
    if (M == 0)
        return N;
    return gcd(N%M, M);
}
 
// Returns GCD of Fib(M) and Fib(N)
int find(int M,  int N)
{
    return fib(gcd(M, N));
}

int main()
{
   int M = 3, N = 12;
   cout << find(M, N);
   return 0;
}
//Output:2
/*
soln:
GCD(Fib(M), Fib(N)) = Fib(GCD(M, N))

The above property holds because Fibonacci Numbers follow
Divisibility Sequence, i.e., if M divides N, then Fib(M)
also divides N. For example, Fib(3) = 2 and every third
third Fibonacci Number is even.

The steps are:
1) Find GCD of M and N. Let GCD be g.
2) Return Fib(g).
*/