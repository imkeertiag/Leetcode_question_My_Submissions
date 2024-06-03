class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        map<int , int> mp ;
        int ans = 0 , mfreq = 0 ;
        int l = 0 , n = nums.size();
       for(int r=0; r<n; r++){
           mp[nums[r]]++ ;
            mfreq = max(mfreq , mp[nums[r]]) ;
            cout<<mfreq<<" ";
            if(r-l+1-mfreq > k){
                mp[nums[l]]-- ;
                l++ ;
            } 
            ans = max(mfreq, ans) ;
        }

      return mfreq;   

    }
};