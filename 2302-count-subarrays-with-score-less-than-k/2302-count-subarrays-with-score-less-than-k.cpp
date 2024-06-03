class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l = 0 , r = 0 , n = nums.size() ;
        int sum = 0 , cnt = 0 , length = 0 , product = 1;
        while(r<n){
          sum += nums[r] ;
          length = r-l+1 ;
          product = sum*length ;
          while(product >= k && l<=r){
            sum -= nums[l] ;
            l++ ;
            length = r-l+1 ;
            product = sum*length ;
          }
          cnt += r-l+1 ;
          cout<<product<<" ";
          r++ ;
        }
        // while(l<n){
        //     cnt++ ;
        //     l++ ;
        // }
        return cnt ;
    }
};