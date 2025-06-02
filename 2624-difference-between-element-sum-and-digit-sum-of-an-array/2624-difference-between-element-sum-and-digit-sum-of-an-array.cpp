class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int total=0;

        for(int num:nums){
               sum+=num;

               int n=num;
               while(n>0){
                int a=n%10;
                total+=a;
                n/=10;
               }
        }return sum-total;
    }
};