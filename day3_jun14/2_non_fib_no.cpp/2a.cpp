/*Given a positive integer n, the task is to print the n’th non Fibonacci number. 
Examples:

Input : n = 2
Output : 6

Input : n = 5
Output : 10
*/

// C++ program to find n'th Fibonacci number
#include<bits/stdc++.h>
using namespace std;
 
// Returns n'th Non-Fibonacci number
int nonFibonacci(int n)
{
    // curr is to keep track of current fibonacci
    // number, prev is previous, prevPrev is
    // previous of previous.
    int prevPrev=1, prev=2, curr=3;
 
    // While count of non-fibonacci numbers
    // doesn't become negative or zero
    while (n > 0)
    {
        // Simple Fibonacci number logic
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;
 
        // (curr - prev - 1) is count of
        // non-Fibonacci numbers between curr
        // and prev.
        n = n - (curr - prev - 1);
    }
 
    // n might be negative now. Make sure it
    // becomes positive by removing last added
    // gap.
    n = n + (curr - prev - 1);
 
    // n must be now positive and less than or equal
    // to gap between current and previous, i.e., 
    // (curr - prev - 1);
 
    // Now add the positive n to previous Fibonacci
    // number to find the n'th non-fibonacci.
    return prev + n;
}
 
// Driver code
int main()
{
   cout << nonFibonacci(5);
   return 0;
}
/*
Output:

10
Time Complexity : O(n)
Auxiliary Space : O(1)*/