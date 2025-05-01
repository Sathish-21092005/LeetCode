class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
       int count = 0;

        for (int i = 0; i < flowerbed.length; i++) {
            // Check if the current spot is empty
            if (flowerbed[i] == 0) {
                // Check if the previous and next spots are also empty or out of bounds
                boolean emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
                boolean emptyRight = (i == flowerbed.length - 1 || flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1; // Plant a flower
                    count++;          // Increase the count
                    if (count >= n) {
                        return true;  // We've planted enough
                    }
                }
            }
        }

        return count >= n;
    }
}