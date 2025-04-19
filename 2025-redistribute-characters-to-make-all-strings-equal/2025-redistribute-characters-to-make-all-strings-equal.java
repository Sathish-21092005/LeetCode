class Solution {
    public boolean makeEqual(String[] words) {
      Map<Character, Integer> frequencyMap = new HashMap<>();
        for (String word : words) {
            for (char c : word.toCharArray()) {
                frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
            }
        }
        int n = words.length;
        for (int count : frequencyMap.values()) {
            if (count % n != 0) {
                return false;
            }
        }
        return true;
    }
    
}