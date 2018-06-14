long long int findPosition(long long int A, long long int N)
{
    int i;
    long int max=100000000;
    long int f1=0;
    long int f2=1;
    long int f3;
    for(i=2;i<=max;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        
        if(f2%A==0)
        return i*N;
    }
// Do code
}
