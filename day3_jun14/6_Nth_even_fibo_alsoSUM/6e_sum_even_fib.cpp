// Find the sum of all the even-valued terms in
// the Fibonacci sequence which do not exceed
// given limit.
#include<iostream>
using namespace std;
 
// Returns sum of even Fibonacci numbers which are
// less than or equal to given limit.
int evenFibSum(int limit)
{
    if (limit < 2)
        return 0;
 
    // Initialize first two even prime numbers
    // and their sum
    long long int ef1 = 0, ef2 = 2;
    long long int sum = ef1 + ef2;
 
    // calculating sum of even Fibonacci value
    while (ef2 <= limit)
    {
        // get next even value of Fibonacci sequence
        long long int ef3 = 4*ef2 + ef1;
 
        // If we go beyond limit, we break loop
        if (ef3 > limit)
            break;
 
        // Move to next even number and update sum
        ef1 = ef2;
        ef2 = ef3;
        sum += ef2;
    }
 
    return sum;
}
 
// Driver code
int main()
{
    int limit = 400;
    cout << evenFibSum(limit);
    return 0;
}
