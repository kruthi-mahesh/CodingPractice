// C++ program to find index of given Fibonacci no
#include<bits/stdc++.h>
 
int findIndex(int n)
{
    float fibo = 2.078087 * log(n) + 1.672276;
 
    // returning rounded off value of index
    return round(fibo);
}
 
// Driver program to test above function
int main()
{
    int n = 55;
    printf("%d\n", findIndex(n));
}

/*
int findIndex(int n)
{
    // if Fibonacci number is less than 2,
    // its index will be same as number
    if (n <= 1)
        return n;
 
    int a = 0, b = 1, c = 1;
    int res = 1;
 
    // iterate until generated fibonacci number 
    // is less than given fibonacci number
    while (c < n)
    {
        c = a + b;
         
        // res keeps track of number of generated 
        // fibonacci number
 
        res++;
        a = b;
        b = c;
    }
    return res;
}*/