class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, n, "", result);
        return result;
    }

    void generate(int openLeft, int closeLeft, string current, vector<string>& result) {
        if (openLeft == 0 && closeLeft == 0) {
            result.push_back(current);
            return;
        }

        if (openLeft > 0) {
            generate(openLeft - 1, closeLeft, current + "(", result);
        }

        if (closeLeft > openLeft) {
            generate(openLeft, closeLeft - 1, current + ")", result);
        }  
    }
};