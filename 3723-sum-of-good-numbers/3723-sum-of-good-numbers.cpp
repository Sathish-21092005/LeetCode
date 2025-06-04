class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int total=0;

        for(int i=0;i<nums.size();++i)
        {

            bool isgood=true;

            if(i-k>=0 && nums[i]<=nums[i-k]  )
             isgood=false;

             if(i+k<nums.size() && nums[i]<=nums[i+k]  )
             isgood=false;

             if(isgood)
             {
                total+=nums[i];
             }
        }return total;
    }
};