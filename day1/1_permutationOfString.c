#include <stdio.h>
int my_strlen(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void swap(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y =  temp;
}
/*parameters are
1. string
2. starting index
3. ending index
*/
void permute(char str[],int m,int n)
{
	int i;
	//base case: m=n ->print
	if(m==n)
	{
		printf("%s\n", str);
		return;
	}
	for(i=m;i<=n;i++)
	{
		swap(str+m,str+i);
		permute(str,m+1,n);
		swap(&str[m],&str[i]); //backtrack
	}
}

int main(int argc, char const *argv[])
{
	char str[10];
	scanf("%[^\n]",str);
	int n = my_strlen(str);
	permute(str,0,n-1);
	return 0;
}
/*
Algorithm Paradigm: Backtracking
Time Complexity: O(n*n!) Note that there are n! permutations and it requires O(n) time to print a a permutation.
Note : The above solution prints duplicate permutations if there are repeating characters in input string.
 Please see next solution that prints only distinct permutations even if there are duplicates in input.
*/