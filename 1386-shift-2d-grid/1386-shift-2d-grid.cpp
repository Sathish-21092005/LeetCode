class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        int total=m*n;

        vector<vector<int>>result(m,vector<int>(n));
        
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
               
            int oldindex= i*n+j;
            int newindex=(oldindex+k)%total;
 
            int nrow=newindex/ n;
            int ncol=newindex% n;

            result[nrow][ncol]=grid[i][j];
            }
        }return result;
         
    }
};