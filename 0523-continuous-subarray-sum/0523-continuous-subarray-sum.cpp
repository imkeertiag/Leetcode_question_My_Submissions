class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int , int> rem ;
       int curr = 0 ;
       rem[0] = -1 ;
       for(int i=0; i<nums.size(); i++){
        curr += nums[i] ;
        int remain = curr%k ;
        if(rem.find(remain) != rem.end()){
            if(i-rem[remain] >= 2)return true ;
            else rem[remain] = i ;
        }
       }
      return false ;
    }
};