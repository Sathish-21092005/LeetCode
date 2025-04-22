class Solution {
    public int longestPalindrome(String s) {
           int[] count = new int[128]; 
        int length = 0;

        for (char ch : s.toCharArray()) {
            count[ch]++;
            if (count[ch] % 2 == 0) {
                length += 2;
            }
        }

        if (length < s.length()) {
            length += 1;
        }

        return length;
    }
}