class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int originalrow=mat.size();
        int originalcol=mat[0].size();

        if(originalrow*originalcol !=r*c)
        return mat;

        vector<vector<int>>reshapematrix(r, vector<int>(c));

        int row=0;int col=0;

        for(int i=0;i<originalrow;i++)
        {
            for(int j=0;j<originalcol;j++)
            {
               reshapematrix[row][col]=mat[i][j];
                col++;

                if(col==c)
                {
                col=0;
                row++;
            }
            }
        }return reshapematrix;
    }
};