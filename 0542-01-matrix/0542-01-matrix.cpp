class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size() ;
        int m = mat[0].size() ;
        vector<vector<int>> dist(n , vector<int> (m , 0)) ;
        vector<vector<int>> visit(n , vector<int> (m , 0)) ;
        queue<pair<pair<int , int> , int >> que ;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    que.push({{i , j} , 0}) ;
                    visit[i][j] = 1 ;
                }
            }
        }
         int dx[] = {-1 , 0 , 1 , 0} ;
        int dy[] = {0 , 1 , 0 , -1} ;
        while(!que.empty()){
            int r = que.front().first.first ;
            int c = que.front().first.second ;
            int cnt = que.front().second ;
            que.pop() ;
            dist[r][c] = cnt ;
            for(int i=0; i<4; i++){
                int row = r + dx[i] ;
                int col = c + dy[i] ;
                if(row>=0 && col>=0 && row<n && col<m && visit[row][col] == 0){
                    visit[row][col] = 1 ;
                    que.push({{row , col} , cnt+1}) ;
                }
            }
        }
        return dist ;
    }
};