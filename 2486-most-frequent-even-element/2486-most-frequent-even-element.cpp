class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int>freq;
    int maxCount = 0;
    int result = -1;
    for (int num : nums) {
        if (num % 2 == 0) {
            freq[num]++;
            if (freq[num] > maxCount || (freq[num] == maxCount && num < result)) {
                maxCount = freq[num];
                result = num;
            }
        }
    }

    return result;
    }
};