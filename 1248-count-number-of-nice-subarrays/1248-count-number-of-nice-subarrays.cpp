class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cntodd = 0 , total = 0;
        queue<int> q ;
        int i=0 , j=0 , size = nums.size() ;
        while(j<size){
            if(nums[j]%2 != 0){
                cntodd++ ;
                q.push(j);
            }
            while(cntodd > k){
               if(nums[i]%2 != 0)cntodd-- ;
               i++ ;
               if(q.front()<i)q.pop() ;
            }
            if(cntodd == k)total += (q.front()-i+1) ;
            j++ ;
        }
        return total ;
    }
};
