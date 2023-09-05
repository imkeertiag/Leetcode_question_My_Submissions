class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0 ;
        int cow = 0 ;
        string ans = "" ; 
        unordered_map<char,int> hash ;
        for(int j=0; j<secret.size(); j++){
            hash[secret[j]]++ ;
        }
       for(int i=0; i<secret.size(); i++){
           if(secret[i] == guess[i])bull++ ;
           if(hash[guess[i]] != 0){
               hash[guess[i]]-- ;
               cow++ ;
           }
       } 
       string s = to_string(bull) ;
       ans = ans + s + 'A' ;
       string t = to_string(cow-bull);
       ans = ans + t + 'B' ;

       return ans ;
    }
}; 