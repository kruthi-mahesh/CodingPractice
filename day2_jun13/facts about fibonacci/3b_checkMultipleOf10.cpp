/*every 3rd number is divisible by 2.
every 5-th number is divisible by 5.
Now LCM of 3 and 5 is 15. So, every 15-th Fibonacci number will be divisible by 10. 
So, we don’t need to find Fibonacci number, just we have to check if n is divisible by 15 or not.*/
#include<bits/stdc++.h>
 
// Returns true if n-th Fibonacci number 
// is multiple of 10.
bool isMultipleOf10(int n)
{
    return  (n % 15 == 0);
}
 
int main()
{
    int n = 30;
    if (isMultipleOf10(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
