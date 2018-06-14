#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
#define N 1000000007
#define fr(i,n) for(int i=0;i<n;i++)
#define FAST_INP  ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {FAST_INP;
	int t;
        cin>>t;
         vector<unsigned int>v(100002);
            long long int i,j,k=1,l=0;
            v[0]=0;
            v[1]=1;
            for(i=2;i<100002;i++)
            {
            v[i]=(v[i-1]%N+v[i-2]%N)%N;
            }
        while(t--)
       {
            int n;
            cin>>n;
           
            cout<<v[n+2]-1<<endl;
}
	return 0;
}