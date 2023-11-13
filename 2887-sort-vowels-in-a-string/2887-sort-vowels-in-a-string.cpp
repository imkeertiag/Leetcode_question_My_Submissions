class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel ;
        for(int i=0; i<s.length(); i++){
            char ch = s[i] ;
            if(ch == 'a' ||ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U')vowel.push_back(ch) ;
        }
        sort(vowel.begin() , vowel.end() ) ;
        int j=0 , k=0 ;
        while(j<s.length() && k<vowel.size()){
           char ch = s[j] ;
            if(ch == 'a' ||ch == 'e' ||ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U'){
                s[j] = vowel[k] ;
                k++ ;
            }
            j++ ;
        }
        return s ;
    }
};