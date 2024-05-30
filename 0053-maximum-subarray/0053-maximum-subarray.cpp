class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 , maxsum = INT_MIN ;
        int l = 0 , r = 0 , n = nums.size();
        while(r<n){
            sum += nums[r] ;
            r++ ;
            if(sum>maxsum)maxsum = sum ;
            while(sum<0){
                sum -= nums[l] ;
                l++ ;
            }
        }
        return maxsum ;
    }
};