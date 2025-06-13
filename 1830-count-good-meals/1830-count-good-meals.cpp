class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int>freq;
        int mod=1e9+7;
        int max=*max_element(deliciousness.begin(),deliciousness.end());
        int maxval=max*2;
        int count=0;

        for(int val:deliciousness)
        {
        for(int sum=1;sum<=maxval;sum*=2)
    {
        int complement=sum-val;

        if(freq.count(complement))
        count=(count+freq[complement])%mod;
    }freq[val]++;
    }return count;
    }
};