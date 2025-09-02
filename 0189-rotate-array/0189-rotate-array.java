class Solution {
    public void rotate(int[] nums, int k) {


       int n = nums.length;
       while (k >= n) {
            k = k - n;
        }
    int[] result = new int[n];
    int newindex=0;
    for (int i = n-k; i < n; i++) {
       
       result[newindex]=nums[i];
       newindex++;
    }
    for(int j=0;j<n-k;j++)
    {
        result[newindex]=nums[j];
        newindex++;
    }

    for(int i=0;i<n;i++){
       nums[i]=result[i];
    }
    }
}