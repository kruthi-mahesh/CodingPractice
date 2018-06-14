#include <iostream>
using namespace std;

#define mod 1000000007

int main()
{
	long long int r,t,i,n;
	cin>>t;
	long long int counts[100001],countb[100001];
	counts[1]=1;
	countb[1]=1;
	for(i=2;i<100001;i++)
	{
		countb[i]=counts[i-1];
		counts[i]=(counts[i-1]+countb[i-1])%mod;
	}
	while(t--)
	{
		cin>>n;
		r=((countb[n]+counts[n])*(countb[n]+counts[n]))%mod;
		cout<<r<<endl;

	}
}