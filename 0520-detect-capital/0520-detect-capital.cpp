class Solution {
public:
    bool detectCapitalUse(string word) {
          bool allUpper = true;
          bool allLower = true;

    for (char c : word) {
        if (!isupper(c)) allUpper = false;
        if (!islower(c)) allLower = false;
    }
    bool firstUpperRestLower =true;
    for (int i = 1; i < word.length(); i++) {
        if (isupper(word[i])) {
            firstUpperRestLower = false;
            break;
        }
    }

    return allUpper || allLower || firstUpperRestLower;
    }
};