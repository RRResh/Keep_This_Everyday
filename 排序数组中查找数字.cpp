//统计一个数字在排序数组中出现的次数。
//二分查找
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) return 0;
        int low=0,high=nums.size()-1,count=0;
        while(low<high)
        {
            int middle=(low+high)/2;
            if(target<=nums[middle]) high=middle;
            else if(target>nums[middle]) low=middle+1;
        }
        for(int i=low;i<nums.size();i++)
        {
            if(nums[i]==target) count++;
        }
        return count;
    }
};
