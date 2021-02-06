//编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>newmatrix=matrix;
        int row=matrix.size(),col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<row;k++)
                    {
                        newmatrix[k][j]=0;
                    }
                    for(int k=0;k<col;k++)
                    {
                        newmatrix[i][k]=0;
                    }
                }
            }
        }
        matrix=newmatrix;
    }
};