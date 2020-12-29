//给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。
//标识位
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    bool flag = false;      //用作第一列的标识位
    int m = matrix.size(), n = matrix[0].size();
    for(int i = 0; i < m; ++i)       //设置标识位
    {
        if(matrix [i][0] == 0)  flag = true;    //单独判断第一列的情况
        for(int j = 1; j < n; ++j)
        {
            if(matrix[i][j] == 0)    matrix[i][0] = matrix[0][j] = 0;
        }     
    }
    for(int i = m-1; i >= 0; --i)       //更新数值时，因为标识位都在左上角，所以自下而上更新0值
    {
        for(int j = n-1; j >= 1; --j)
        {
          if(matrix[i][0] == 0 || matrix [0][j] == 0)
            matrix[i][j] = 0;
        }     
        if(flag)    matrix[i][0] = 0;   //第一列元素单独判断
    }

    }
};

著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。