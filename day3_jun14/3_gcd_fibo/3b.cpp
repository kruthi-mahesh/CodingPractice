#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int gcd(int a,int b)
{
    if(!a)  
    return b;
    return gcd(b%a,a);
}
int main()
{
	int t;
	cin>>t;
	unsigned long fib[1001];
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<1001;i++)
	    fib[i]=(fib[i-1]%100+fib[i-2]%100)%100;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<fib[gcd(n,m)]%100<<endl;
	}
	return 0;
}