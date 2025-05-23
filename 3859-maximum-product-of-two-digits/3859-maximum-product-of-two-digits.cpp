class Solution {
public:
    int maxProduct(int n) {
       vector<int> digits;
       while(n>0)
       {
        digits.push_back(n%10);
        n/=10;
       }
       int maxproduct=0;
       for(int i=0 ; i<digits.size(); i++)
       {
        for(int j=i+1; j<digits.size(); j++)
        {
           int product=digits[i]*digits[j];
           maxproduct=max(maxproduct,product);
        }
       }return maxproduct;
    }
};