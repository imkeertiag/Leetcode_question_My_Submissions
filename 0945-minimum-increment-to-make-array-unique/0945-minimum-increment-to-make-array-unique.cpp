class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count = 0 ;
        map<int , int> mp ;
        for(auto itr: nums){
            mp[itr]++ ;
        }
        int cnt = 0 ;
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            int trepeat = it->second - 1 ;
            if(trepeat>0){    // movetonext
               mp[it->first + 1] += trepeat ;
               count += trepeat ; 
            }
        }
        return count ;
    }
};