//Method1:recursion
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
	if(n<=1)
		return n;
	return fibo(n-1)+fibo(n-2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fibo(n);
	return 0;
}
//Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential

//Method2: ( Use Dynamic Programming )
int fibo(int n)
{
	int f[n+2];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++)
		f[i] = f[i-1]+f[i-2];
	return f[n];
}
//Time Complexity: O(n)
//Extra Space: O(n)

//Method3: ( Space Optimized Method 2 )
int fib(int n)
{
	if(n<=1)
		return n;
	int a=0,b=1,sum;
	for(int i=2;i<=n;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
	}
	return b;
}

/*Time Complexity: O(n)
Extra Space: O(1)

Method 4 ( Using power of the matrix {{1,1},{1,0}} )*/
void multiply(int F[2][2], int M[2][2]);
void power(int F[2][2],int n);
int fibo(int n)
{
	int F[2][2] =  {{1,1},{1,0}};
	if(n<=1)
		return n;
	power(F,n-1);
	return F[0][0];
}
void power(int F[2][2],int n)
{
	if(n<=1)
		return;
	int M[2][2] = {{1,1},{1,0}};
	for(int i=2;i<=n;i++)
		multiply(F,M);
}
void multiply(int F[2][2],int M[2][2])
{
	int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
	int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
	int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
	int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}


/*Time Complexity: O(n)
Extra Space: O(1)

Method 5 ( Optimized Method 4 )

/* Optimized version of power() in method 4 */
void power(int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}

/*Time Complexity: O(Logn)
Extra Space: O(Logn) if we consider the function call stack size, otherwise O(1).

Method 6 (O(Log n) Time)
Below is one more interesting recurrence formula that can be used to find n’th Fibonacci Number in O(Log n) time.

If n is even then k = n/2:
F(n) = [2*F(k-1) + F(k)]*F(k)

If n is odd then k = (n + 1)/2
F(n) = F(k)*F(k) + F(k-1)*F(k-1)*/

#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1000;
 
// Create an array for memoization
int f[MAX] = {0};
 
// Returns n'th fuibonacci number using table f[]
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
 
    // Applyting above formula 
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}
int main()
{
    int n = 9;
    printf("%d ", fib(n));
    return 0;
}

//Time complexity of this solution is O(Log n)
// as we divide the problem to half in every recursive call.