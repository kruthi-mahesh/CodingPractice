/*A direct way is to count number of digits in the nth Fibonacci number using below Binet’s Formula.

fib(n) = (Φn - Ψ-n) / √5
where
Φ = (1 + √5) / 2
Ψ = (1 - √5) / 2

The above formula can be simplified, 
fib(n) = round(Φn / ? 5) 
Here round function indicates nearest integer.

Count of digits in Fib(n) = Log10Fib(n)
                          = Log10(Φn / √5)
                          = n*Log10(Φ) - Log10√5
                          = n*Log10(Φ) - (Log105)/2
                          */
/* C++ program to find number of digits in nth
   Fibonacci number */
#include<bits/stdc++.h>
using namespace std;
 
// This function returns the number of digits
// in nth Fibonacci number after ceiling it
// Formula used (n * log(phi) - (log 5) / 2)
long long numberOfDigits(long long n)
{
    if (n == 1)
        return 1;
 
    // using phi = 1.6180339887498948
    long double d = (n * log10(1.6180339887498948)) -
                    ((log10(5)) / 2);
 
    return ceil(d);
}
 
// Driver program to test the above function
int main()
{
    long long i;
    for (i = 1; i <= 10; i++)
    cout << "Number of Digits in F("<< i <<") - "
         << numberOfDigits(i) <<endl;
 
    return 0;
}
