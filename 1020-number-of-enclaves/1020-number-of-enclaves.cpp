class Solution {
public:
void dfs(int x , int y , vector<vector<int>>& board , vector<vector<int>> &visited){
    int n = board.size() ;
    int m = board[0].size() ;
    visited[x][y] = 1 ;
    int dx[] = {-1 , 0 , 1 ,0} ;
    int dy[] = {0 ,1 ,0 , -1 } ;
    for(int i=0; i<4; i++){
        int row = x+dx[i] ; int col = y + dy[i] ;
        if(row >=0 && col>= 0 && row<n && col<m && !visited[row][col] && board[row][col] == 1 ){
          dfs(row , col , board , visited) ;
        }
    }
}
    int numEnclaves(vector<vector<int>>& board) {
        int n = board.size() ;
        int m = board[0].size() ;
        vector<vector<int>> visited(n , vector<int> (m , 0)) ;
        for(int i=0; i<n; i++){
            int j=0 ;
            if(board[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1 ;
                dfs(i , j , board , visited) ;
            }
            j=m-1 ;
            if(board[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1 ;
                dfs(i , j , board , visited) ;
            }
        }
        for(int j=0; j<m; j++){
            int i=n-1 ;
            if(board[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1 ;
                dfs(i , j , board , visited) ;
            }
            i=0 ;
            if(board[i][j] == 1 && visited[i][j] == 0){
                visited[i][j] = 1 ;
                dfs(i , j , board , visited) ;
            }
        }
     int cnt = 0 ;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 1 && !visited[i][j]){
                cnt ++ ;
            }
        }
     }
     return cnt ;
    }
};