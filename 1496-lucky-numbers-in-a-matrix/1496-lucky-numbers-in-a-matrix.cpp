class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector <int> result;
        int col=0;

        for(int i=0;i<matrix.size();i++)
        {
           int smallest= matrix[i][0];

           for(int j=1;j<matrix[i].size();j++)
           {
            if(matrix[i][j]<smallest)
            {
              smallest=matrix[i][j];
              col=j;
            }
           }
            bool islucky =true;
           
           for(int k=0;k<matrix.size();k++)
           {
            if(matrix[k][col]>smallest)
            {
                islucky=false;
                break;
            }
           }
            if (islucky) {
            result.push_back(smallest);
        }
        }return result;
    }
};