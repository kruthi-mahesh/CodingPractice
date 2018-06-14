/*Given an input number of sections and each section has 2 plots on either sides of the road.
 Find all possible ways to construct buildings in the plots such that there is a space between any 2 buildings.*/
#include <iostream>
using namespace std;
int countNoWays(int n)
{
	//base case
	if(n==1)
		return 4;
	int countB=1,countS=1,preB,preS;
	
	for(int i=2;i<=n;i++)
	{
		preB = countB;
		preS = countS;

		countS = preB + preS;
		countB = preS;
	}

	int res1 = countS + countB;
	return (res1*res1);
}
int main(int argc, char const *argv[])
{
	int N,t;
	cin>>t;
	while(t--)
	{
		cin>>N;
		cout<<countNoWays(N);
	}
	return 0;
}

/*soln:
We can simplify the problem to first calculate for one side only. If we know the result for one side, we can always do square of the result and get result for two sides.

A new building can be placed on a section if section just before it has space. A space can be placed anywhere (it doesn’t matter whether the previous section has a building or not).

 

Let countB(i) be count of possible ways with i sections
              ending with a building.
    countS(i) be count of possible ways with i sections
              ending with a space.

// A space can be added after a building or after a space.
countS(N) = countB(N-1) + countS(N-1)

// A building can only be added after a space.
countB[N] = countS(N-1)

// Result for one side is sum of the above two counts.
result1(N) = countS(N) + countB(N)

// Result for two sides is square of result1(N)
result2(N) = result1(N) * result1(N)
 

result1(N) is actually equal to fibo(N)+fibo(N+1) , where fibo(N) is the Nth fibonnaci term.

So, we can find and store all the fibonnaci terms beforehand.*/

//OPtimized soln
// result(N) = fib(N+2)^2
