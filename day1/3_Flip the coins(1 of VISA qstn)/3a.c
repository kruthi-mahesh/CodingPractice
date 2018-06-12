//Flip the coins - there is a bug in this answer
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Myatoi(char *str)
{
    int res = 0; // Initialize result
    // Iterate through all characters of input string and
    // update result
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + (str[i] - '0');

    return res;
}

int main(){
    
    int t,k,m,n; 
    fflush(stdout);
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        
        scanf("%d%d",&n,&m);
        int *arr=(int *)malloc(n*sizeof(int));
            for(k=0;k<n;k++)
                {
                arr[k]=0;
            }
        
        
        int count=0;
        for(int a1 = 0; a1 < m; a1++)
        {
            char* s = (char *)malloc(512000 * sizeof(char));
            fflush(stdout);
            // scanf("%[^\n]s",s);
            gets(s);
          
           // printf("\nstroing  %s\n",s);
            if(strcmp(s,"FlipAll")==0)
            {
                for(k=0;k<n;k++)
                    arr[k]=0;  
                count=0;//printf("flipall");
            
              
            }
           else 
           {
               //printf("Before atoi str %s ,%s",s,s+5);
              int num=Myatoi(s+5);
                 //printf("my toi %d\n ",num);
              if(arr[num]==0)
              {
                  arr[num]=1;
                  count++;
              }
              else 
              {
                  arr[num]=0;
                  count--;
              }
                 
            }
            printf("%d\n",count);
        }
        printf("\n");
       
    }
    return 0;
}
