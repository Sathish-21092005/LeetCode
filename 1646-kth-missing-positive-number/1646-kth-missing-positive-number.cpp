class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int i = 0; 
    int num = 1;
    int missingCount = 0;

    while (true) {
        if (i < arr.size() && arr[i] == num) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return num;
            }
        }
        num++;
    }
    }
};