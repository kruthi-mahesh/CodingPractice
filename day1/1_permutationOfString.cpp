/*
 * C++ Program to Find Permutations of Given Character String
 */
 
#include<iostream>
using namespace std;
 
/* Function to swap two characters 
void swap(char& a, char& b)
{
    char temp(a);
    a = b;
    b = temp;
}
*/

void permute(string s,int m,int n)
{
    int i;
    if (m == n)
        cout << s << "\t";
    else
    {
        for (i = m; i <= n; i++)
        {
            swap(s[m],s[i]);
            permute(s, m + 1, n);
            swap(s[m],s[i]);
        }  
    }
}
 
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl << "The permutations of the given string : " << endl;
    permute(s, 0, s.length()-1);
    cout << endl;
}
