class Solution {
public:
    long long findSum(vector<int>& nums, long long divisor) {
        long long sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low = 1;
        long long high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            long long mid = low + (high - low) / 2;

            long long currSum = findSum(nums, mid);

            if (currSum > threshold) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return (int)low;
    }
};