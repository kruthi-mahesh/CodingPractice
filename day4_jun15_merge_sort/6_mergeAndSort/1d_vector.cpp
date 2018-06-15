#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    int n;
	    cin>>n;
	    int k=n;
	    vector<int> vec;
	    while(k--)
	    {
	        int t;
	        cin>>t;
	        for(int p=0;p<t;p++)
	        {
	            int q;
	            cin>>q;
	            vec.push_back(q);
	        }
	    }
	    sort(vec.begin(),vec.end());

	    for(vector<int> :: iterator i =vec.begin();i!=vec.end()-1;i++)
	    {
	        if(*i==*(i+1))
            {
                vec.erase(i+1);
                i--;
            }
        }
	    for(vector<int> :: iterator i=vec.begin();i!=vec.end();i++)
	        cout<<(*i)<<" ";
	    cout<<endl;
	}
	return 0;
}