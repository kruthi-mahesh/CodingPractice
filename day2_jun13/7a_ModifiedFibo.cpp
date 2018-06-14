/*qstn:
Given a number n,  print the value of F(n) given that  

F(1) = A + B and
F(2) = B + C.  
Here A, B and C are integer inputs provided to the program.
For n > 2, F(n) = F(n-1) - F(n-2)

Since F(n) can be large, print the answer modulo (10^9+7).


Hint:Values start repeating after six values and take care of modulo operation.
*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <math.h>
#include <ctype.h>

#define YES  1
#define NO   0
#define SIZE 1000

#include <map>
#include <vector>
#include <algorithm>
#include <string>      // needed for string
#include <iostream>    // needed for cin, cout
#include <sstream>     // needed for stringstream
using namespace std;

#if 0
f(1) = a + b
f(2) = b + c
f(n) = f(n-1) - f(n-2)


2 2 3 4
f(1) = 5
f(2) = 7



3 2 3 4
f(3) = 2
f1 = a + b
f2 = b + c
f3 = f2 - f1 = c - a
f4 = f3 - f2 =  c-a - b+c  =  -a-b  = -f1
f5 = f4 - f3 = -a-b  + a-c  =  -b-c = -f2
f6 = f5 - f4 = -b-c  + a+b  =  a - c = -f3
f7 = a - c + b + c  =  a + b = f1
5
7
2
1000000002
1000000000
1000000005
5
7
2
1000000002
#endif



long long a, b, c, n, ans, m;



long long calc(long long n)
{
    if (n == 0) return a + b;
    if (n == 1) return b + c;
    if (n == 2) return c - a;
    if (n == 3) return -a - b;
    if (n == 4) return -b - c;
    if (n == 5) return a - c;
    return 0;
}


void getAnswer(void)
{
    m = 1000000007LL;
    scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
    n--;
    n = n % 6;
    ans = calc(n);ans = (ans + m) % m;
    printf("%lld\n", ans);
}

int main(void)
{
	int i, numCases;
	
	scanf("%d", &numCases);
	for (i = 1; i <= numCases; i++) getAnswer();
	return 0;
}

/* 
Input :
2
2 2 3 4
3 2 3 4

Output :
7
2
*/