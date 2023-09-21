class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ;
        double value = 0 ;
        for(auto itr: nums1)ans.push_back(itr) ;
        for(auto itr: nums2)ans.push_back(itr) ;
        sort(ans.begin() , ans.end()) ;
        int n = ans.size() ;
        if(n%2 != 0){
            value = ans[n/2] ;
        }else{
            value = (ans[n/2-1]+ans[n/2])/2.0 ;
        }
        return value ;
    }
};