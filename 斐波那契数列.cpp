//题目：斐波那契数列
//递归：不推荐 时间复杂度太高
class Solution{
public:
	int fib(int n){
		if (n <= 1) return n;
		return fib(n - 1) + fib(n - 2);
	}
};

//动态规划
class Solution {
public:
	int fib(int n) {
		if (n <= 1) return n;
		int a[n + 1];//数组里面要存N+1个数 去听算法课
		a[0] = 0;
		a[1] = 1;//要先把这两个写出来
		for (int i = 2; i <= n; i++)
		{
			a[i] = (a[i - 1] + a[i - 2]) % 1000000007;
		}
		return a[n];
	}
};