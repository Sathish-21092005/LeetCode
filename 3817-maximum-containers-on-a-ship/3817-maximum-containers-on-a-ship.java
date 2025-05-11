class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
        int m = Math.min(n * n, maxWeight / w);
        return m;

    }
}