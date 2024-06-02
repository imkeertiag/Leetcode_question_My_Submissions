class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // a ^ a = 0
        int xorall = nums[0] , one=0 , two=0 ;
        for(int i=1; i<nums.size(); i++)xorall ^= nums[i] ;
        int lsb = (xorall & (xorall - 1))^xorall ;
        for(int i=0; i<nums.size(); i++){
            if((nums[i] & lsb) == lsb)one ^= nums[i] ;
            else two ^= nums[i] ;
        }
        return {one , two} ;
    }
};