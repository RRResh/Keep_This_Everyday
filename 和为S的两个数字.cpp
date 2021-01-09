//输入一个递增排序的数组和一个数字s，在数组中查找两个数，使得它们的和正好是s。如果有多对数字的和等于s，则输出任意一对即可。
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==0) return {};
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==target) return {nums[i],nums[j]};
            else if(nums[i]+nums[j]<target) i++;
            else j--;
        }
        return {};
    }
};