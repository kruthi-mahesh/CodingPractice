/*sadie has a drawer filled with pink, purple, yellow, and green socks.
 if she draws socks out of the drawer one at a time, 
 how many will she have to pull out before she has a matched pair?

 soln to get exactly one matched pair = no of types + 1
 									  = 4 + 1 = 5
 */

/*
Pair of Socks
There are A red socks, B green socks and C Yellow socks in a dark room. Ashwin wants to find N
pairs of matching colored socks from the dark room.

Given all A, B and C are even and N ≤ (A+B+C)/2, write a program that outputs how many socks
Ashwin would have to draw from the dark room in the worst case, to have exactly N pairs.
1. Input Format
First line contains three space separated integers: A, B and C.
Second line contains the number of pairs Ashwin wants: N.
2. Output Format
Single line containing a single integer which is the count of socks needed to draw in the worst case
3. Constraints
0 ≤ A,B,C ≤ 10^6
0 ≤ N ≤ (A + B + C)/2
4. Example
Input 1:
2 4 4
1
Output 1:
4
Input 2:
2 4 4
4
Output 2:
9
Input 3:
2 4 4
5
Output 3:
10
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,N;
	cin >> a>> b >> c >> N;
	int total = a + b + c;
	int maxN = (total)/2;
	
	if(N == maxN)
		cout << 2*N << endl;
	else if(N == maxN - 1)
		cout << 2*N + 1 << endl;
	else
		cout << 2*N + 2 << endl;
	return 0;
}
