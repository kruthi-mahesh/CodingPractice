#include <iostream>
#include <algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,n1=0;
	    cin>>n;
	    int a[n][100],b[1000];
	    for(int i=0;i<n;i++)
	    {
	       int m;
	       cin>>m;
	       for(int j=0;j<m;j++)
	        cin>>a[i][j];
	       for(int k=0;k<m;k++)
	        b[n1++]=a[i][k];
	    }
	    sort(b,b+n1);
	    //for(int i=0;i<n1;i++)
	    //cout<<b[i]<<" ";
	    for(int i=0;i<n1-1;i++)
	    {
	      if(b[i]!=b[i+1])
	    	cout<<b[i]<<" ";
	    }
	    cout<<b[n1-1];
	    cout<<endl; 
	}
	return 0;
}