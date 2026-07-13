class Solution {
public:
    int numOfDays(vector<int>& weights, int capacity) {
        int daysReq = 1, load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > capacity) {
                daysReq++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return daysReq;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            int currDays = numOfDays(weights, mid);

            if (currDays > days) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};