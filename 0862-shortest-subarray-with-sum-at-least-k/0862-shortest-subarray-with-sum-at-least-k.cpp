class Solution {
public:
#define ll long long
    int shortestSubarray(vector<int>& nums, int k) {
        priority_queue< pair<long long, long long> , vector<pair<long long,long long>> , greater<pair<long long,long long>> > pq; // min heap
        ll sum = 0;
        ll n = nums.size() ;
        ll minlen = n+1 ;
        for(ll i=0; i<n; i++){
            sum += nums[i] ;
            if(sum >=k)minlen = min(minlen , i+1) ;
            while(!pq.empty() && (sum-pq.top().first)>=k){
                minlen = min(minlen , i-pq.top().second) ;
                pq.pop() ;
            }
            pq.push({sum , i}) ;
        }
        if(minlen == n+1)return -1 ;
        return minlen ;
    }
};