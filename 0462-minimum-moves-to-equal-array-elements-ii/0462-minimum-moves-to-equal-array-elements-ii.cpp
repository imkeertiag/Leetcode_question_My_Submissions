class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin() , nums.end() ) ;
       int n = nums.size() ;
       int mid = nums[n/2] ;
       int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum += abs(nums[i]-mid );
    }
        return sum ;
    }
};