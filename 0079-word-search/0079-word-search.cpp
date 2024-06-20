class Solution {
public:bool checkword(vector<vector<char>>& board, string word , int i , int j , int k){
    int n = board.size() ;
    int m = board[0].size() ;
    if(k>=word.size())return true ;
    if(i<0 || i>=n || j<0 || j>=m || board[i][j] == '.' || word[k] != board[i][j])return false ;
    if(word.size()== 1 && word[k] == board[i][j])return true ;
    board[i][j] = '.' ;
    bool flag = false ;
    int x[4] = {0 , 0 , -1 , 1} ;
    int y[4] = {-1 , 1 , 0 , 0} ;
    for(int t=0; t<4; t++){
        flag = flag || checkword(board , word , i+x[t] , j+y[t] , k+1) ;
    }
    board[i][j] = word[k] ;
    return flag ;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size() ;
        int m = board[0].size() ;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(word[0] == board[i][j]){
                    if(checkword(board , word , i , j , 0))return true ;
                }
            }
        }
        return false ;
    }
};