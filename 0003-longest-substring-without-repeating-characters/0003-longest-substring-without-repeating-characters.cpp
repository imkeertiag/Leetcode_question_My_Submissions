class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int left=0 ;
        int n= s.length() ;
        int maxlen = 0;
        for(int right=0;right<n;right++){
            if(hash.count(s[right]) ==0 || hash[s[right]] < left){
                hash[s[right]] = right ;
                maxlen=max(maxlen , right-left+1);
            }else{
                left= hash[s[right]] + 1 ;
                hash[s[right]] = right;
            }
        }
        return maxlen ;
    }
};


//using unordered_set
// int left=0 ,right=0 ,maxi=0;
//         unordered_set<char> st;
//         while(right<s.length()){
//          if(st.find(s[right]) == st.end()){ // element is not present
//          st.insert(s[right]);
//          maxi = max(maxi , right-left+1);
//          right++;
//          }
//          else{
//             st.erase(s[left]);
//             left++;
//          }
//         }
//         return maxi;