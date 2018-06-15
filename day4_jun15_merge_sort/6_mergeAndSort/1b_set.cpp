#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
	    int n;
	    cin>>n;
	    set<int> s;
	    for(int i=1;i<=n;i++)
	    {
	        int p;
	        cin>>p;
	        for(int j=1;j<=p;j++)
	        {
	            int l;
	            cin>>l;
	            s.insert(l);
	        }
	    }
	    
	    for(set<int>::iterator it = s.begin();it!=s.end();it++)
	    	cout<<*it<<" ";
	 //   for(set<int>::iterator it:s)
       // 	cout<<*it<<" ";
	    cout<<endl;
	}
	return 0;
}