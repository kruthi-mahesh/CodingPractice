#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        long int a=1,b=2,c=3;
        long int n;
        cin>>n;
        while(n>0)
        {
            a=b;
            b=c;
            c=a+b;
            n=n-(c-b-1);
        }
        n=n+(c-b-1);
        cout<<b+n<<endl;
    }
	return 0;
}