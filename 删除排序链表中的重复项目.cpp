//删除排序数组中的重复项
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i = 0, j = 0;//快慢指针 不等则交换
		for (i = 0, j = 0; j<nums.size(); j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		return i;
	}
};
//时间复杂度：O(n)
//空间复杂度：O（1）