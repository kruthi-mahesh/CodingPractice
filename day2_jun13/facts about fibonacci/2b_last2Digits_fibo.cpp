#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	
	
	ll arr[300]={0};
	arr[0]=0,arr[1]=1;
	for(int i=2;i<300;i++)
	{
	    arr[i] = (arr[i-1]+arr[i-2])%100;
	}
	int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << arr[n%300]<<endl;
	}
	return 0;
}