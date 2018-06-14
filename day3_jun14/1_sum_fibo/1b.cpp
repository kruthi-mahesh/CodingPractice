/*
Since the answer can be very large, answer modulo 1000000007 should be printed.
Constraints:
1 <=T<= 20000
1 <= N <=100000


Example:
Input:
2
6
5

Output:
20
12
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
        cin>>t;
        vector<unsigned int>v(100002);
            long long int i,j,k=1,l=0;
            v[0]=0;
            v[1]=1;
            for(i=2;i<100002;i++)
            {
            v[i]=(v[i-1]%1000000007+v[i-2]%1000000007)%1000000007;
            }
        while(t--)
        {
            int n;
            cin>>n;
            cout<<v[n+2]-1<<endl;
        }
	return 0;
}