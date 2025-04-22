class Solution {
    public int thirdMax(int[] nums) {
   TreeSet<Integer> set = new TreeSet<>(Collections.reverseOrder());
        
        for (int num : nums) {
            set.add(num);
        }
        
        if (set.size() >= 3) {
            Iterator<Integer> it = set.iterator();
            it.next(); 
            it.next();
            return it.next(); 
        }
        return set.first();

          
    }
}