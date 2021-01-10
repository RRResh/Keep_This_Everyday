//输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。
//序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int i=1,j=1,sum=0;
        vector<vector<int>> res;
        while(i<=target/2)
        {
            if(sum<target)
            {
                sum+=j;//因为滑动窗口是左闭右开区间
                j++;
            }
            else if(sum>target)
            {
                sum-=i;
                i++;
            }
            else{
                vector<int> arr;
                for(int k=i;k<j;k++) arr.push_back(k);
                res.push_back(arr);
                sum-=i;
                i++;
            }
        }
        return res;
    }
};