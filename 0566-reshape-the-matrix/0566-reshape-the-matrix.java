class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
         int originalRows = mat.length;
        int originalCols = mat[0].length;
        int totalElements = originalRows * originalCols;

        if (r * c != totalElements) {
            return mat;
        }
        int[][] result = new int[r][c];
        for (int i = 0; i < totalElements; i++) {
            result[i / c][i % c] = mat[i / originalCols][i % originalCols];
        }

        return result;
    }
}