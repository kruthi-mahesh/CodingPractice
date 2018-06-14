// CPP program to find Fibonacci series numbers
// in a given array.
#include <bits/stdc++.h>
using namespace std;
 
// Function to check number is a
// perfect square or not
bool isPerfectSquare(int num)
{
    int n = sqrt(num);
    return (n * n == num);
}
 
// Function to check if the number
// is in Fibonacci or not
void checkFib(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfectSquare(5 * array[i] * array[i] + 4) || isPerfectSquare(5 * array[i] * array[i] - 4)) {
            cout << array[i] << " ";
            count++;
        }
    }
    if (count == 0)
        cout << "None present" << endl;
}
 
// Driver function
int main()
{
    int array[] = { 4, 2, 8, 5, 20, 1, 40, 13, 23 };
    int n = sizeof(array) / sizeof(array[0]);
 
    checkFib(array, n);
 
    return 0;
}