class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans ;
        unordered_map<string , int> mp ;
        for(int i=0; i<words.size(); i++){
           mp[words[i]]++ ;
        }
        priority_queue<pair<int,string>> maxheap ;
        for(auto itr: mp){
            maxheap.push({-itr.second , itr.first}) ;// to remove all extra elements from top 
        }
        while(maxheap.size() > k){
            maxheap.pop() ;
        }
        while(!maxheap.empty()){
            auto it = maxheap.top() ;
            ans.push_back(it.second) ;
            maxheap.pop() ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};