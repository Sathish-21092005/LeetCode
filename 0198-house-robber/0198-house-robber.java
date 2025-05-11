class Solution {
    public int rob(int[] nums) {
        
        int n = nums.length;
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        int prev1 = 0;
        int prev2 = 0;
        for (int i = 0; i < n; i++) {
            int temp = prev2;
            prev2 = Math.max(prev1 + nums[i], prev2);
            prev1 = temp;
        }

        return prev2;
    }
}