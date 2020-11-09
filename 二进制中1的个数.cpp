//题目 ：二进制中1的个数
//请实现一个函数，输入一个整数，输出该数二进制表示中 1 的个数。
//右移
class Solution {
public:
	int hammingWeight(uint32_t n) {
		int count = 0;
		while (n)
		{
			if (n & 1 == 1) count++;
			n >>= 1;
		}
		return count;
	}
};