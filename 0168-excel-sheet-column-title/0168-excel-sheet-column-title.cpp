class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while(columnNumber>0)
        {
            columnNumber--;
            int reminder=columnNumber%26;
            result=char('A'+reminder)+result;

            columnNumber/=26;
        }return result;
    }
};