//从扑克牌中随机抽5张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能视为 14。
//先排序后遍历
class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
            {
                zero++;
                continue;
            }
            int j=i+1;
            if(j<nums.size())
            {
                if(nums[i]==nums[j]) return false;
                int tmp=nums[j]-nums[i];
                while(tmp>1)
                {
                    if(zero==0) return false;
                    zero--;
                    tmp--;
                }
            }
        }
        return true;
    }
};