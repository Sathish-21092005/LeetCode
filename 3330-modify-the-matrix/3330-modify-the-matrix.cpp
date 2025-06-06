class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

      vector<int> colval(col, INT_MIN);

       for (int j = 0; j < col; j++) {
    for (int i = 0; i < row; i++) {
        colval[j] = max(colval[j], matrix[i][j]);
            }
        }
         for(int i=0;i<row;i++)
         {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=colval[j];
                }
            }
         }return matrix;
    }
};