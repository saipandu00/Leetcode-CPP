class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int K){
        int cnt=0, boq=0;
        for(int i = 0; i<arr.size();i++){
            if(arr[i]<=day){
                cnt++;
                if(cnt==K){boq++; cnt=0; }
            } else {  cnt=0; }
        } return boq>=m; }
    int minDays(vector<int>& arr, int m, int k) {
        long long total=1LL*m*k;
        if(total>arr.size()){return -1;}
        int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        int low=mini, high=maxi, result=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k)){
                result=mid; high=mid-1;
            } else {
                low=mid+1; }
        } return result;
    }
};