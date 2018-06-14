#define max 1000000007
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int i,n,a=1,b=1,c;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    {
	        c=(a%max)+(b%max);
	        a=(b%max)+(c%max);
	        b=(a%max)+(c%max);
	    }
	    cout<<(c%max)<<endl;
	}
	return 0;
}