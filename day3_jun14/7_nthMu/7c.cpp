long long int findPosition(long long int A, long long int N)
{
    long long int  a=0,b=1,c,i=2;
    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%A==0)
        {
            return N*i;
        }
        i++;
    }
}