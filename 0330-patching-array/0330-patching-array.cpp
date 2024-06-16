
class Solution {
public:
    int minPatches(vector<int>& nums, int target) {
       
        long long ans = 0,pre=0;
        
        for(int i=0;i<nums.size() and pre<target ;++i){            
         while(pre < nums[i]-1 and pre<target){
            pre += (pre+ 1);
            ++ans;
          }
             pre+= nums[i];
        }
        
        while(pre < target){
            pre += (pre+ 1);
            ans++;
        }
         return ans;
    }
};