class Solution {
public:
bool isvowel(char s){
    if(s == 'a' || s == 'e' || s == 'i' ||s == 'o' || s == 'u' )return true ;
    return false ;
}
    int maxVowels(string s, int k) {
        int count = 0 ;
        int ans = 0 ;
        for(int i=0; i<k; i++){
           if(isvowel(s[i]) == true)count++ ;
        }
        ans = count;
        
        int start = 0 ;
        int end = k;
        while(end < s.length()){
        if(isvowel(s[start]) == true)count-- ;
        if(isvowel(s[end]) == true)count++ ;
        start++ ;
        end++ ;
        ans = max(count , ans) ;
        }
        return ans ;
    }
};