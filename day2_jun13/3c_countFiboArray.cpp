#include <iostream>
#include <math.h>
using namespace std;

bool check(int a)
{
    if(sqrt(a)==(int)sqrt(a))
        return true;
    else
        return false;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,count=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	        if(check(5*a[i]*a[i] + 4) || check(5*a[i]*a[i] - 4))
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}