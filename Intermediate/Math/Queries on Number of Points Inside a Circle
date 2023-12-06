class Solution {
    public int[] countPoints(int[][] points, int[][] queries) {
    	  short i, j;
        short pointsArraySize = (short) points.length;
        short queriesArraySize = (short) queries.length;
        int [] result = new int[queriesArraySize];

        for (i = 0; i < queriesArraySize; i++) {
            result[i] = 0;
            for (j = 0; j < pointsArraySize; j++) {
            	// euclid distance
                if (queries[i][2] * queries[i][2] >= (queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0]) + (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1])) {
                    result[i]++;
                }
            }
        }
        return result;
    }
}
