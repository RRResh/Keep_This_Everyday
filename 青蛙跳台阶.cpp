//题目 青蛙跳台阶 基本等同于斐波那契 就是初始条件不同
//一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。
//结果需要取模1000000007 用递归会超时 用DP
class Solution {
public:
	int numWays(int n) {
		if (n == 0) return 1;
		if (n <= 2) return n;
		int a = 1, b = 2, c = 0;
		for (int i = 3; i <= n; i++)
		{
			c = (a + b) % 1000000007;
			a = b;
			b = c;
		}
		return b;
	}
};