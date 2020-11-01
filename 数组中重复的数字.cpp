//题目：数组中重复的数字
//在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
//数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
//请找出数组中任意一个重复的数字。
//正解：O(n) O(1)
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		int i = 0;
		while (i<nums.size())
		{
			if (nums[i] == i)
			{
				i++;
				continue;
			}
			if (nums[i] == nums[nums[i]])
			{
				return nums[i];
			}
			swap(nums[i], nums[nums[i]]);
		}
		return -1;
	}
};
//还可以通过排序直接解决 O(nlogn) o(1) 记住头文件 algorithm
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (nums[i] == nums[i + 1])    return nums[i];
		}
		return -1;
	}
};