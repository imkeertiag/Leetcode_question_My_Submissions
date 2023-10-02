class Solution {
public:
    bool winnerOfGame(string col) {
        int counta = 0 , countb = 0 ;
        // bool ans = false ;
        for(int i=1; i<col.length()-1; i++){
            if(col[i-1] == 'A' && col[i] == 'A' && col[i+1] == 'A')counta++ ;
            if(col[i-1] == 'B' && col[i] == 'B' && col[i+1] == 'B')countb++ ;
        }
        return (counta > countb) ;
    }
};