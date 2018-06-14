// C program to demonstrate that sequence of last 
// digits of Fibonacci numbers repeats after 60.
#include <iostream>
#define max 100
using namespace std;
int main()
{
    int i;
    long long int arr[max];
    arr[0] = 0;
    arr[1] = 1;
 
    // storing Fibonacci numbers
    for (int i = 2; i < max; i++)
        arr[i] = (arr[i-1] + arr[i-2])%10;
 
    // Traversing through store numbers
    for (i = 1; i < max - 1; i++)
    {
        // Since first two number are 0 and 1
        // so, if any two consecutive number encounter 0 and 1
        // at their unit place, then it clearly means that
        // number is repeating/ since we just have to find
        // the sum of previous two number
        if ((arr[i] == 0) && (arr[i+1]  == 1))
            break;
    }
    cout<<"Sequence is repeating after index "<< i<<endl;
}
/*The series of last digits repeats with a cycle length of 60*/