class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        //sort the arrays
        sort(nums1.begin() , nums1.end()) ;
        sort(nums2.begin() , nums2.end()) ;

        // check common digits if any present in both arrays
        vector<int> v(10,0);
        for(auto &i: nums1)v[i]++;
        for(auto &i: nums2)v[i]++;
        for(int i = 1; i < 10; i++)if(v[i]>1)return i;

        //if no common then take smallest digits of both the arrays
        int ans = 0 ;
         if(nums1[0] > nums2[0]){
                ans = nums2[0]*10 + nums1[0] ;
            }
            else if(nums1[0] < nums2[0]){
                ans = nums1[0]*10 + nums2[0] ;
            }
        return ans;
    }
};