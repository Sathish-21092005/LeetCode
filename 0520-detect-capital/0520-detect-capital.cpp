class Solution {
public:
    bool detectCapitalUse(string word) {
          bool allUpper = true;
    bool allLower = true;

    for (char c : word) {
        if (!isupper(c)) allUpper = false;
        if (!islower(c)) allLower = false;
    }

    // Check if first letter is uppercase and rest are lowercase
    bool firstUpperRestLower = isupper(word[0]);
    for (int i = 1; i < word.length(); i++) {
        if (!islower(word[i])) {
            firstUpperRestLower = false;
            break;
        }
    }

    return allUpper || allLower || firstUpperRestLower;
    }
};