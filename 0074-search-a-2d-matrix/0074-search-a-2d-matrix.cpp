class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int j=matrix[0].size()-1;
     int i=0;
        while(j>=0 && i<row)
        {
            int current=matrix[i][j];
            if(current==target)return true;
            else if(target > current)i++;
            else j--;
        }return false;
    }
};