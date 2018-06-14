#include <iostream>
using namespace std;
typedef  long long int ll;
#define MOD 1000000007
ll arr[100001];
void fibo()
{
    
	arr[0] = 1;	//fibo(0)
	arr[1] = 2;	//fibo(1)

	for(int i=2;i<=100000;i++)
	{
		arr[i] = (arr[i-1]%MOD+arr[i-2]%MOD)%MOD;
	}
	
}
int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	fibo();
	while(t--)
	{
		cin>>n;
		cout<<(arr[n]*arr[n])%MOD<<endl;
	}
	return 0;
}
/*
Constraints:
1<= T <= 100000
1<= N <= 105

Example:
Input:
1
3

Output:
25

For Input:
2
101
102
Your Output is:
674110565
1808775
*/