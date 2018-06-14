//The series of final digits repeats with a cycle length of 60
// Optimized Program to find last 
// digit of nth Fibonacci number
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
// Finds nth fibonacci number
ll fib(ll f[], ll n)
{
    // 0th and 1st number of
    // the series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for (ll i = 2; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 10;
 
    return f[n];
}
 
int findLastDigit(int n)
{
    ll f[60] = {0};
 
    // Precomputing units digit of  
    // first 60 Fibonacci numbers
    fib(f, 60);
 
    return f[n % 60];
}
 
// Driver code
int main ()
{
    int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << findLastDigit(n)<<endl;
	}
    return 0;
}