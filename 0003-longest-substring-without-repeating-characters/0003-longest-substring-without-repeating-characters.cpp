class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char , int> mp ;
      int left = 0 ,n = s.length() ;
      int maxlen = 0 ;
       for(int right=0;right<n;right++){
        mp[s[right]]++ ;
        if(mp.size() == right-left+1){
            maxlen=max(maxlen , right-left+1);
            cout<<maxlen ;
        }
        if(mp.size() < right-left+1){
            while(mp.size() != right-left+1){
            mp[s[left]]-- ;
            if(mp[s[left]] == 0)mp.erase(s[left]) ;
            left++ ;
            }
        }
       } 
       return maxlen ; 
    }
};