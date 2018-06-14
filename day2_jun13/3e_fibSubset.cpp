#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	long long int fib[101];
	unordered_map<long long int, bool> map;
	fib[0] = 0;
	fib[1] = 1;
	map[fib[0]] = true;
	map[fib[1]] = true;
	for(int i=2; i<101; i++) {
	    fib[i] = fib[i-1]+fib[i-2];
	    map[fib[i]] = true;
	}
	//cout<<fib[6];
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++) {
	        cin>>arr[i];
	        if(map.count(arr[i])==1)
	            cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}