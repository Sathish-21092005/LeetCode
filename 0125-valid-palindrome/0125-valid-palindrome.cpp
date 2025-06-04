class Solution {
public:
    bool isPalindrome(string s) {
       string clean="";
      for(char c:s)
      {
        if(isalnum(c))
        {
            clean+=tolower(c);

        }
      } string filter=clean;
      reverse(filter.begin(),filter.end());
      return clean==filter;
      
    }
};