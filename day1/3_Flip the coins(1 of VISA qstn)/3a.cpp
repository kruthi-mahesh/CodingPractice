//Flip the coins 
#include <iostream>
using namespace std;

int main(){
    
    int t,m,n,i,j,k,count,num; 
    cin>>t;
    for(i = 0; i < t; i++)
    {    
        cin >> n >> m;
        int *arr=  new int[n];
        
        for(k=0;k<n;k++)
        {
            arr[k]=0;
        }
        
        
        count=0;
        string s;
        for(j = 0; j < m; j++)
        {
            cin>>s;
            if(s == "FlipAll")
            {
              for(k=0;k<n;k++)
                arr[k] = 0;
              count = 0;
            }
            else
            {
              cin >> num;
              
              arr[num] ^= 1;
              if(arr[num]==1)
                count++;
              else
                count--;
            }
            cout <<count<<endl;
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}
