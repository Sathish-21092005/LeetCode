class Solution {
public:
    int findComplement(int num) {
       if(num==0)return 0;

       int bits= log2(num)+1;
       unsigned int mask=(1ULL << bits)-1;

       return mask^num;
    }
};