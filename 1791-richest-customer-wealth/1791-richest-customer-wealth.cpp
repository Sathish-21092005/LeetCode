class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int maxwealth =0;
       int s=accounts.size();
       for(int i=0;i< accounts.size();i++)
       {
        int sum=0;
        for(int j=0;j< accounts[i].size();j++)
        {
           sum+=accounts[i][j];
        }
        if(sum>maxwealth)
        {
            maxwealth=sum;
        }
       } return maxwealth;
    }
};