class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size() ;
       int maxans ;
       int pro = 1 ;
       for(int i=0; i<n; i++){
          pro *= nums[i] ;
          maxans = max(maxans , pro) ; 
          if(nums[i] == 0)pro = 1 ;
       }
       pro = 1 ;
       for(int i=n-1; i>=0; i--){
          pro *= nums[i] ;
          maxans = max(maxans , pro) ; 
          if(nums[i] == 0)pro = 1 ;
       }
       return maxans ; 
    }
};