class Solution {
private:
void bfs(int row , int col , vector<vector<int>> &visit , vector<vector<char>> grid){
    int n = grid.size() ;
    int m = grid[0].size() ;
    visit[row][col] = 1 ;
    queue<pair<int , int>> q ;
    q.push({row , col}) ;
    while(!q.empty()){
        int r = q.front().first ;
        int c = q.front().second ;
        q.pop() ;
        for(int delr=-1; delr<=1; delr++){
            for(int delc=-1; delc<=1; delc++){
                int x = r + delr ;
                int y = c + delc ;
                //check for out of bound cases - abs waali condition striver missed 
                if((abs(delr-delc) ==1) && x>=0 && x<n && y>=0 && y<m 
                && grid[x][y] == '1' && !visit[x][y]){
                   visit[x][y] = 1 ;
                   q.push({x , y}) ;
                }
            }
        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        vector<vector<int>> visit(n, vector<int> (m,0)) ; 
        int cnt =0 ;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visit[i][j] && grid[i][j] == '1'){
                    cnt++ ;
                    bfs(i , j , visit , grid) ;
                }
            }
        }
        return cnt ;
    }
};