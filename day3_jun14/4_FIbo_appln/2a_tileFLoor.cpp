/*qstn:
Given a “2 x n” board and tiles of size “2 x 1”, 
count the number of ways to tile the given board using the 2 x 1 tiles.
 A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile.
Constraints:

1 ≤ T ≤ 50
1 ≤ W ≤ 70

Example:

Input
2
5
3

Output
8
3


Examples:

Input n = 3
Output: 3
Explanation:
We need 3 tiles to tile the board of size  2 x 3. 
We can tile the board using following ways
1) Place all 3 tiles vertically. 
2) Place first tile vertically and remaining 2 tiles horizontally.
3) Place first 2 tiles horizontally and remaining tiles vertically

Input n = 4
Output: 5
Explanation:
For a 2 x 4 board, there are 5 ways
1) All 4 vertical
2) All 4 horizontal
3) First 2 vertical, remaining 2 horizontal
4) First 2 horizontal, remaining 2 vertical
5) Corner 2 vertical, middle 2 horizontal
*/
/*
soln:
Let “count(n)” be the count of ways to place tiles on a “2 x n” grid, we have following two ways to place first tile.
1) If we place first tile vertically, the problem reduces to “count(n-1)”
2) If we place first tile horizontally, we have to place second tile also horizontally. So the problem reduces to “count(n-2)”

Therefore, count(n) can be written as below.

   count(n) = n if n = 1 or n = 2
   count(n) = count(n-1) + count(n-2) 
The above recurrence is noting but Fibonacci Number expression. We can find n’th Fibonacci number in O(Log n) time,
*/

using namespace std;


long long int dp[72];
void pre(){
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=71;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
}
int main(){

	int t;
	cin >> t;
	pre();
	while(t--){
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}
	return 0;
}  
