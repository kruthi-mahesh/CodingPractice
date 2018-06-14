#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n,a=0,b=1,sum=0;
	    cin>>n;
	    if(n==0)
	    	cout<<a;
	    else
	    	cout<<a<<" "<<b<<" ";
	    sum=a+b;
	    while(sum<=n)
	    {
	        
	        cout<<sum<<" ";
	        a=b;
	        b=sum;
	        sum=a+b;
	    }
	    cout<<endl;
	}
	return 0;
}