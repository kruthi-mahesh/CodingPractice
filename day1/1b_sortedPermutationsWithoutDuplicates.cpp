#include <iostream>
#include <algorithm>
using namespace std;

// This function finds the index of the smallest character
// which is greater than 'first' and is present in str[m..n]
int findCeil(string str, char first, int m, int n)
{
    // initialize index of ceiling element
    int res = m;
 
    // Now iterate through rest of the elements and find
    // the smallest character greater than 'first'
    for (int i = m+1; i <= n; i++)
        if (str[i] > first && str[i] < str[res])
            res = i;
 
    return res;
}

// Print all permutations of str in sorted order
void sortedPermutations(string str)
{
	sort(str.begin(),str.end());
	bool isFinished = false;
	int count = 1;

	while(!isFinished)
	{
		// print this permutation
		cout << count++ << "  " << str << endl;

        // Find the rightmost character which is smaller than its next
        // character. Let us call it 'first char'
        int i;
        int size = str.length();
        for (i = size - 2; i >= 0; --i)
            if (str[i] < str[i+1])
                break;

        // If there is no such chracter, all are sorted in decreasing order,
        // means we just printed the last permutation and we are done.
        if (i == -1)
            isFinished = true;
        else
        {
            // Find the ceil of 'first char' in right of first character.
            // Ceil of a character is the smallest character greater than it
            int ceilIndex = findCeil(str, str[i], i + 1, size - 1);
 
            // Swap first and second characters
            swap(str[i], str[ceilIndex]);

            // Sort the string on right of 'first char'
            sort(str.begin()+i+1,str.end());
        }
	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	sortedPermutations(str);

	return 0;
}