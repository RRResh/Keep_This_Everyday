//在一个由 '0' 和 '1' 组成的二维矩阵内，找到只包含 '1' 的最大正方形，并返回其面积。
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int maximalSquare(char** matrix, int matrixSize, int* matrixColSize){
    int i, j, area = 0;
    int row = matrixSize, col = matrixColSize[0];
    if(row < 1) return 0;
    int **dp = (int**)calloc(row+1, sizeof(int*));
    for(i = 0;i <= row;++i)
        dp[i] = (int*)calloc(col+1, sizeof(int));
    for(i = 1;i <= row;++i)
    {
        for(j = 1;j <= col;++j)
        {
            if(matrix[i-1][j-1] == '1')
            {
                dp[i][j] = 1 + MIN(MIN(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]);
                area = area > dp[i][j] ? area : dp[i][j];
            }
        }
    }
    return area * area;
}