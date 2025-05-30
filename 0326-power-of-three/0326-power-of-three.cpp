class Solution {
public:
    bool isPowerOfThree(int n) {
    if (n <= 0) return false; 

    long long x = 1;
    while (x < n) {
        x = x * 3;
    }

    return x == n;
    }
};