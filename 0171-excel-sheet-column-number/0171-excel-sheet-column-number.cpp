class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(int ch:columnTitle)
        {
            result=result*26+(ch-'A'+1);

        }return result;
    }
};