class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int>mp; // for the elements in arr1 but not in arr2 
        for(auto it:arr1){
            mp[it]++;
        }
        arr1.clear();
        for(auto it:arr2){
            if(mp.find(it)!=mp.end()){ // if element is there
                while(mp[it]!=0){
                    arr1.push_back(it);
                    mp[it]--;
                }
                if(mp[it]==0){
                    mp.erase(it);
                }
            }
        }
        for(auto it:mp){
            while(it.second--){
                arr1.push_back(it.first);
            }
        }
        return arr1;
    }
};