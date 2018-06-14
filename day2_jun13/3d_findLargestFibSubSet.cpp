// C++ program to find largest Fibonacci subset
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
 
// Prints largest subset of an array whose
// all elements are fibonacci numbers
void findFibSubset(int arr[], int n)
{
    // Find maximum element in arr[]
    int max = *std::max_element(arr, arr+n);
 
    // Generate all Fibonacci numbers till
    // max and store them in hash.
    int a = 0, b = 1;
    unordered_set<int> hash;
    hash.insert(a);
    hash.insert(b);
    while (b < max)
    {
        int c = a + b;
        a = b;
        b = c;
        hash.insert(b);
    }
 
    // Npw iterate through all numbers and
    // quickly check for Fibonacci using
    // hash.
    for (int i=0; i<n; i++)
        if (hash.find(arr[i]) != hash.end())
            printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = {4, 2, 8, 5, 20, 1, 40, 13, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    findFibSubset(arr, n);
    return 0;
}