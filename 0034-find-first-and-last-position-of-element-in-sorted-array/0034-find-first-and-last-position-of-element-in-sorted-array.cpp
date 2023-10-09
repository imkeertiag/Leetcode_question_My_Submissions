class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ;
        int var = -1;
        int s=0 , e=nums.size()-1 ;
         int mid  = s + (e-s)/2 ;
        while(s<=e){
         
          if(nums[mid] == target){
             e = mid-1 ;
             var = mid ;
          }
          else if(nums[mid] < target){
            s = mid+1 ; 
          }
          else{
              e = mid-1 ;
          }
          mid  = s + (e-s)/2 ;
        }
        ans.push_back(var) ;

         var = -1;
         int s2=0 , e2=nums.size()-1 ;
         int mid2  = s2 + (e2-s2)/2 ;

         while(s2 <= e2){
          if( nums[mid2] == target){
             s2 = mid2 + 1 ;
             var = mid2 ;
          }
          else if(nums[mid2] < target){
            s2 = mid2+1 ; 
          }
          else{
              e2 = mid2-1 ;
          }
          mid2  = s2 + (e2-s2)/2 ;
        }
        ans.push_back(var) ;
        return ans ;
    }
};