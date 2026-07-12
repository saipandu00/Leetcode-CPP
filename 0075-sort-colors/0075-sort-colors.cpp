class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) cnt0++;
            else if(nums[i] == 1) cnt1++;
            else cnt2++;
        }
        int idx = 0;
        for(int i = 0; i < cnt0; i++){
            nums[idx++] = 0;
        }
        for(int i = 0; i < cnt1; i++){
            nums[idx++] = 1;
        }
        for(int i = 0; i < cnt2; i++){
            nums[idx++] = 2;
        }
    }
};

//APPORACH
//FIrst we will take the integer inputs cnt 
//Then, I overwrite the array by placing all 0s first, followed by all 1s, and then all 2s according to their counts. This solution runs in O(n) time with O(1) extra space since the number of distinct values is fixed.
