class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>result;
        for(int num:nums)
        {
            result.push_back(to_string(num));
        }
            sort(result.begin(),result.end(),[](string a,string b){
            return a+b>b+a;
            });
        
        if(result[0]=="0")return "0";

        string res;
        for(string s:result)
        {
            res+=s;
        }
         return res;
    }
};