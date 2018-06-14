/*Given a floor of size n x m and tiles of size 1 x m.
 The problem is to count the number of ways to tile the given floor using 1 x m tiles. 
 A tile can either be placed horizontally or vertically.
Both n and m are positive integers and 2 < = m.
*/

// C++ implementation to count number of ways to
// tile a floor of size n x m using 1 x m tiles
#include <bits/stdc++.h>
 
using namespace std;
 
// function to count the total number of ways
int countWays(int n, int m)
{
 
    // table to store values
    // of subproblems
    int count[n + 1];
    count[0] = 0;
 
    // Fill the table upto value n
    for (int i = 1; i <= n; i++) {
        // recurrence relation
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
 
        // base cases
        else if (i < m)
            count[i] = 1;
 
        // i = = m
        else
            count[i] = 2;
    }
 
    return count[n];
}
 
int main()
{
    int n = 7, m = 4;
    cout << "Number of ways = "
         << countWays(n, m);
    return 0;
}

/*soln:

            |  1, 1 < = n < m
 count(n) = |  2, n = m
            | count(n-1) + count(n-m), m < n
*/