/*qstn
Given an array of integers, the task is to check whether it's an arithmetic progression, geometric progression or fibonacci series, and need to print the next number in the series or -99999 if the given numbers does not follow any of the above series. The fibonacci series need not start with 0.   A valid fibonacci series could be 8,9,17

NOTE: In case of clash, following precedence shold be followed: AP>GP>FIBO

Input:
The First line of the input contains a single interger T denoting the number of testcases. Then T test cases follow. Each test cases consists of two lines. First tline of each test case contains an interger N denoting the no. of integers in an array. The second line of each test case contains N integers denoting the array elements.

Output:
Corresponding to each test case, print the desired output modulo 10^9+7 in a new line.

NOTE: In case of floating point answer , the answer should be next greater integer.

Constraints: 
1<=T<=100
2<=N<=20
0<=A[i]<=10^9


Example:
INPUT:
4
3
1 2 3
4
1 3 9 27
4
2 3 5 8
3
2 5 6

OUTPUT:
4
81
13
-99999
*/

#include<bits/stdc++.h>
using namespace std;

bool checkgp(int arr[],int n)
{
    int a=arr[0];
    int r=arr[1]/a;
    for(int i=2;i<n;i++)
    {
        if(r==0) return false;
        if(arr[i]!=(a*(pow(r,i)))) return false;
    }
    return true;
}
int gp(int arr[],int n,bool flag)
{
    int a=arr[0];
    int r=arr[1]/a;
    if(flag==true) return a*(pow(r,n));
}

bool checkap(int arr[],int n)
{
    int a=arr[0];
    int r=arr[1]-a;
    for(int i=2;i<n;i++)
    {
        if(arr[i]!=(a+(i*r))) return false;
    }
    return true;
}
int ap(int arr[],int n,bool flag)
{
    int a=arr[0];
    int r=arr[1]-a;
    if(flag==true) return a+(r*n);
}
bool checkfc(int arr[],int n)
{
    int a=arr[0];
    int r=arr[1];
    for(int i=2;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+arr[i-2]) return false;
    }
    return true;
}
int fc(int arr[],int n,bool flag)
{
    int a=arr[n-2];
    int r=arr[n-1];
    if(flag==true) return a+r;
}


int main() {
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(checkgp(arr,n)) cout<<gp(arr,n,checkgp(arr,n))<<endl;
	    else if(checkap(arr,n)) cout<<ap(arr,n,checkap(arr,n))<<endl;
	    else if(checkfc(arr,n)) cout<<fc(arr,n,checkfc(arr,n))<<endl;
	    else cout<<"-99999"<<endl;
	}
	return 0;
}