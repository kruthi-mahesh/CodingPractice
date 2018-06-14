#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s[15]={"2","3","5","13","89","233","1597","28657","514229","433494437","2971215073","99194853094755497","1066340417491710595814572169","19134702400093278081449423917","475420437734698220747368027166749382927701417016557193662268716376935476241"};
	    string s1;
	    cin>>s1;
	    int k=0;
	    for(int i=0;i<15;i++)
	    {
	    	if(s1==s[i])
	    	{
	    		cout<<"0"<<endl;
	    		k=1;
	    		break;
	    	}
	    }
	    if(k==0)
	    	cout<<"1"<<endl;
	}
	return 0;
}
