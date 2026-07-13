class Solution {
public:
    long long totalHours(vector<int> &piles, long long speed){
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed; 
        }

        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        while(low < high){
            long long mid = low +(high - low) / 2;
            long long hours = totalHours(piles, mid);
            if(hours > h){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return (int)low;
    }
};