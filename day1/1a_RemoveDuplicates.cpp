#include <iostream>
using namespace std;

bool shouldSwap(string str,int start,int curr)
{
	int i;
	for(i=start;i<curr;i++)
		if(str[i] == str[curr])
			return 0;
	return 1;
}

void permute(string str,int m,int n)
{
	if(m==n){
		cout<<str<<endl;
		return;
	}
	for(int i=m;i<=n;i++)
	{
		bool check = shouldSwap(str,m,i);
		if(check)
		{
			swap(str[m],str[i]);
			permute(str,m+1,n);
			swap(str[m],str[i]);
		}
	}	
}
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	permute(s,0,s.length()-1);
	return 0;
}