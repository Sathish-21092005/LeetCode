class Solution {
public:
    int alternateDigitSum(int n) {
        std::string str = std::to_string(n);
    int sum = 0;

    for (int i = 0; i < str.length(); ++i) {
        int digit = str[i] - '0';
        if (i % 2 == 0)
            sum += digit;          
        else
            sum -= digit;        
    }

    return sum;
    }
};