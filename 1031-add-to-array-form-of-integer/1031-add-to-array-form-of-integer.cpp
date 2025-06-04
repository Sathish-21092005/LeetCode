class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int n=num.size()-1;

        while(n>=0|| k>0)
        {
            if(n>=0)
            {
                k+=num[n];
                n--;
            }
            
            result.push_back(k%10);
            k/=10;
        }reverse(result.begin(),result.end());
        return result;
    }
};