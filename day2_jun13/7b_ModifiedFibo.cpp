#include <iostream>
using namespace std;

int kMod = 1000000007;

long long count(long long n, int a, int b, int c) {
    long long f1 = (a+b) % kMod;
    long long f2 = (b+c) % kMod;
	long long f3 = ((c-a) + kMod) % kMod;
    long long f4 = (-f1+kMod) % kMod;
    long long f5 = (-f2+kMod) % kMod;
    long long f6 = (-f3+kMod) % kMod;
	    
	long long f[6] = {f6,f1,f2,f3,f4,f5};
	return f[n%6];
}

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long n;
	    int a,b,c;
	    cin >> n >> a >> b >> c;
	    
	    cout << count(n,a,b,c) << '\n';
	}
	return 0;
}