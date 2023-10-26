class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "" ;
        if(s.size() < t.size())return ans ;
        unordered_map<char , int> mp ;
        for(auto itr: t){
            mp[itr]++ ;
        }

        int i=0 , last = INT_MAX , first = 0 , cnt = t.size() ;
        for(int j=0; j<s.size(); j++){
            if(mp[s[j]] > 0)cnt-- ;
            mp[s[j]]-- ;
            while(cnt == 0){
                if(last > j-i+1){
                    last = j-i+1 ;
                    first = i ;
                }
                mp[s[i]]++ ;
                if(mp[s[i]] > 0)cnt++ ;
                i++ ;
            }
        }
        if(last == INT_MAX)ans = "" ;
        else ans = s.substr(first , last) ; 
        return ans ;
    }
};

// for(auto p: mp){
        //     cout<<p.first<<p.second<<endl ;
        // }