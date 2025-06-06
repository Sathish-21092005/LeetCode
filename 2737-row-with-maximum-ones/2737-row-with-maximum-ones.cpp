class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int a=-1;
        int b=-1;

        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                count++;
            }
            if(count>a)
            {
                a=count;
                b=i;
            }
        }return {b,a};
    }
};