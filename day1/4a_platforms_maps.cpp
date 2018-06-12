#include <bits/stdc++.h>
using namespace std;

int findPlat(int arr[],int dep[],int n)
{
	// Insert all the times (arr. and dep.)
	// in the multimap.
	map<int,char> order;
	for(int i=0;i<n;i++){
		order.insert(make_pair(arr[i],'a'));
		order.insert(make_pair(dep[i],'d'));
	}
	int res=0,platNeeded=0;
	map<int,char>::iterator it;
	for(it=order.begin();it!=order.end();it++)
	{
		if((*it).second == 'a')
			platNeeded++;
		else
			platNeeded--;
		if(platNeeded>res)
			res = platNeeded;
	}
	return res;	
}
int main(int argc, char const *argv[])
{
	int arr[] = {900, 940, 950, 1100, 1500, 1800};
	int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<findPlat(arr,dep,n)<<endl;
	return 0;
}                                          
