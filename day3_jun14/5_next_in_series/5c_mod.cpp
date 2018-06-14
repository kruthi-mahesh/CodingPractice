using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    int f1=1,f2=1,f3=1;
	    long long int d=v[1]-v[0],ans1=v[1]+d,ans3_1=v[1],ans3_2=v[1]+v[0];
	    long double r=(float)(((float)v[1])/v[0]);
	    long long int rat=r,ans2=v[1]*rat;
	    for(int i=2;i<n;i++){
	        if(f1==1){
	            if(d!=v[i]-v[i-1])
	            f1=0;
	            else{
	              ans1=((ans1)%1000000007 + (d)%1000000007)%1000000007;  
	            }
	        }
	        if(f2==1){
	            if(r!=(float)(((float)v[i])/v[i-1]))
	            f2=0;
	            else{
	              ans2=((ans2)%1000000007 * (rat%1000000007))%1000000007;  
	            }
	        }
	        if(f3==1){
	            if(v[i]!=v[i-1]+v[i-2])
	            f3=0;
	            else{

	                long long int temp;
	                temp=ans3_2;
	                ans3_2=((ans3_1)%1000000007+(ans3_2)%1000000007)%1000000007;
	                ans3_1=temp;
	            }
	        }
	    }
	    if(f1==1){
	    	cout<<ans1<<endl;
		}
	    
	    else if(f2==1){
	    	cout<<ans2<<endl;
		}
	    
	    else if(f3==1){
	    	cout<<ans3_2<<endl;
		}	    
	    else
	    cout<<-99999<<endl;
	}
	return 0;
}