class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxi=0;

        for(int num:nums)
        {
            freq[num]++;
        }
    
    for(auto& it:freq)
    {
        int len=it.first;
        if(freq.count(len+1))
        {
            int n=freq[len]+freq[len+1];
            maxi=max(maxi,n);
        }
    }
    return maxi;
    
    }
};