class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;
        unordered_map<string ,vector<string> > mp ;
        for(auto temp: strs){
            string x = temp ;
            sort(temp.begin() , temp.end()) ;
            mp[temp].push_back(x) ;
        }
        for(auto itr: mp){
            ans.push_back(itr.second) ;
        }
        return ans ;
    }
};