//basic soln
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int d=a[1]-a[0];
        int flag=1;
        for(int i=2;i<n;i++)
        {
            int temp=a[0]+(i)*d;
            if(temp!=a[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<a[0]+n*d<<"\n";
        }
        else
        {
            flag=1;
            if(a[0]!=0)
            {
              d=a[1]/a[0];
              for(int i=2;i<n;i++)
              {
                if(d==0)
                {
                    flag=0;
                    break;
                }
                  int temp=a[0]*pow(d,i);
                  if(temp!=a[i])
                  {
                      flag=0;
                      break;
                  }
              }
              if(flag)
              {
                cout<<int(a[0]*pow(d,n))<<"\n";
              }
            }
            if(!flag)
            {
                flag=1;
                for(int i=2;i<n;i++)
                {
                    if(a[i]!=a[i-1]+a[i-2])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<a[n-1]+a[n-2]<<"\n";
                }
                else
                    cout<<"-99999"<<"\n";
            }
        }
    }
	return 0;
}