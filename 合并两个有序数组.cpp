//合并两个有序数组
//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		//最朴素的解法就是将两个数组合并之后再排序。时间复杂度较差，为O((n + m)\log(n + m))O((n+m)log(n+m))。
		//这是由于这种方法没有利用两个数组本身已经有序这一点。
		for (int i = m, j = 0; j<n; i++, j++)
		{
			nums1[i] = nums2[j];
		}
		for (int i = 0; i<m + n; i++)//冒泡排序
		{
			for (int j = i + 1; j<m + n; j++)
			{
				if (nums1[i]>nums1[j])
				{
					swap(nums1[i], nums1[j]);
				}
			}
		}
	}
	    //使用指针p从后往前遍历数组1，
		//使用两个指针p1，p2分别指向数组1、数组2的末尾元素，
		//两个指针的较大值插入p中，同时将较大的指针向后移。
		//注意考虑边界条件，如果p1 < 0，则直接将p2赋值给p，如果p2 < 0，则直接将p1赋值给p.
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int p = n + m - 1, p1 = m - 1, p2 = n - 1;
	while (p >= 0)
	{
		if (p1<0)
		{
			nums1[p] = nums2[p2--];//--是可以放出去的只不过写进来简洁
		}
		else if (p2<0)
		{
			nums1[p] = nums1[p1--];
		}
		else if (nums1[p1] <= nums2[p2])
		{
			nums1[p] = nums2[p2--];
		}
		else
		{
			nums1[p] = nums1[p1--];
		}
		p--;
	}
}
};