// C program to demonstrate that Fibonacci numbers
// that are divisible by their indexes have indexes
// as either power of 5 or multiple of 12.
#include<stdio.h>
#define MAX 100
 
int main()
{
    // storing Fibonacci numbers
    long long int arr[MAX];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < MAX; i++)
        arr[i] = arr[i-1] + arr[i-2];
 
    printf("Fibonacci numbers divisible by "
          "their indexes are :\n");
    for (int i = 1; i < MAX; i++)
        if (arr[i] % i == 0)
            printf("%d  ", i);
}

/*output:
Fibonacci numbers divisible by their indexes are :
1  5  12  24  25  36  48  60  72  96 */