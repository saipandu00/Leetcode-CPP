class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;          
            }
            return freq[a] < freq[b]; 
        });
        return nums;
    }
};


// Approach
// Count the frequency of each element using a hash map (unordered_map).
// If two numbers have different frequencies, the number with the smaller frequency comes first.
// If two numbers have the same frequency, the larger number comes first.