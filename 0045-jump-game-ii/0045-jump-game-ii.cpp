class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int end = 0;
        int maxReach = 0;
        for(int i =0; i< nums.size() - 1; i++){
            maxReach = max(maxReach, i + nums[i]);
            if(maxReach >= nums.size() - 1){
                ans++;
                break;
            }
            if (i == end){
                ans++;
                end = maxReach;
            }
        }
        return ans;
    }
};