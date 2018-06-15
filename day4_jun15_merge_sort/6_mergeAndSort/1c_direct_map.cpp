#include <iostream>

using namespace std;
typedef long long int ll;
/*
void merge(int *A,int f,int m,int l)
{
    int i= f,j=m+1,k;
    int B[l+2];
    for(k=f;i<=m && j<=l;k++)
    {
        if(A[i]<A[j])
        {
         B[k]= A[i++];   
        }
        else B[k]=A[j++];
    }
    while(i<=m)
    {
        B[k++]= A[i++];
    }
    while(j<=l)
    {
        B[k++]= A[j++];
    }
for(i=f;i<=l;i++) A[i]= B[i];    
}
void ms(int *A,int f,int l)
{
    if(f>=l) return;
    int m= (f+l)/2;
    ms(A,f,m);
    ms(A,m+1,l);
    merge(A,f,m,l);
}
*/
int main()
 {
     int t,n,k;
     cin>>t;
   
     while(t--)
     {
         int  A[200] = {0};
         int m,k=0;
         cin>>m;
         for(int i=0;i<m;i++)
         {
             cin>>n;
             for(int j=0;j<n;j++)
             {
                 cin>>k;
                 A[k]++;
             }
         }
        for(int i=0;i<101;i++) if(A[i]) cout<<i<<" ";
        cout<<"\n";
     }
	//code
	return 0;
}