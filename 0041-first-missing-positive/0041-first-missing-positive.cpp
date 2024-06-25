class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int k = 1 ;
        for(int i=0 ; i < nums.size(); i++){
           if(nums[i] > 0){
              if(nums[i] == k) k++ ;
              else return k ;
           } 
        }
        return k ;
    }
};