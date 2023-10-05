class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ;
        int elem = nums.size()/3 ;
        unordered_map<int , int> hash ;
        for(auto itr: nums){
            hash[itr]++ ;
        }
        for(auto itr: hash){
            if(itr.second > elem)ans.push_back(itr.first) ;
        }
        return ans ;
    }
};