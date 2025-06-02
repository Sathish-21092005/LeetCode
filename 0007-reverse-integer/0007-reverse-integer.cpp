class Solution {
public:
    int reverse(int x) {
       long long reversed = 0;
    while (x != 0) {
        long long digit = x % 10;
        reversed = reversed * 10 + digit;
        x/= 10;
    }  if (reversed < INT32_MIN || reversed > INT32_MAX)
        return 0;

    return static_cast<int>(reversed);
   
    }
};