class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0;
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            count++;
            if(nums[i]<0)
            n++;
        }return max(count,n);
    }
};