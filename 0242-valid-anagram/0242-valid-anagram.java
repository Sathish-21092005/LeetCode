class Solution {
    public boolean isAnagram(String s, String t) {
    if(s.length()!=t.length())
    return false;

    char[]ch=s.toCharArray();
    char[]cha=t.toCharArray();
    
    Arrays.sort(ch);
    Arrays.sort(cha);

return Arrays.equals(ch,cha);
    }
}