using namespace std;

int main() {
	//code
	long long int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    long long int f[n+1];
	    f[0]=0;
	    f[1]=2;
	    for(long long int j=2;j<=n;j++)
	    {
	        f[j]=(4*f[j-1]%1000000007+f[j-2]%1000000007)%1000000007;
	    }
	    f[n]=f[n]%1000000007;
	    cout<<f[n]<<endl;
	}
	return 0;
}