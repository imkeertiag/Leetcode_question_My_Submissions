class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // we can only use bfs in this question
        int n = grid.size() ;
        int m = grid[0].size() ;
        vector<vector<int>> visited(n , vector<int> (m , 0)) ;
        queue<pair<pair<int , int> , int>> q ;
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(grid[i][j] == 2){
                  q.push({{i , j} , 0 }) ;
                   visited[i][j] = 2 ;
               }
            }
         }
        int maxtime = 0 ;
        int delx[] = {-1,0,1,0} ;
        int dely[] = {0,1,0,-1} ;
          while(!q.empty()){
            int x = q.front().first.first ;
            int y = q.front().first.second ;
            int time = q.front().second ;
            maxtime = max(maxtime , time) ;
            q.pop() ;
            for(int i=0; i<4; i++){
                int row = x+delx[i] ;
                int col = y+dely[i] ;
                if(row>=0 && col>=0 && row<n && col<m && 
                visited[row][col] != 2 && grid[row][col] == 1){
                    visited[row][col] = 2 ;
                    q.push({{row , col} , time+1}) ;
                }
            }
        }  
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 && visited[i][j] != 2)return -1 ;
            }
        }
         return maxtime ;
    }
};