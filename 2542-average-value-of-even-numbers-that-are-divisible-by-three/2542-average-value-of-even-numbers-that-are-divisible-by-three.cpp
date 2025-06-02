class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=0;
        int count=0;
        for(int num:nums)
        {
            if(num%2==0&&num%3==0)
            {
                n+=num;
                count++;
            }
            
           
        } if(count==0)return 0;
        return n/count;
    }
};