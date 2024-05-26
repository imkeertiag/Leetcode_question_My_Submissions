class Solution {
    void dfs(vector<int> adjlist[] , vector <int> &vis , int node){
      vis[node] = 1 ;
      for(auto itr: adjlist[node]){
        if(!vis[itr]){
        dfs(adjlist , vis , itr) ;
        }
      }
}
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size() ;
        vector<int> adjlist[v] ;
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if( i !=j && isConnected[i][j] == 1){
                   adjlist[i].push_back(j) ;
                //    adjlist[j].push_back(i) ;
                }
            }
        }

       int cnt = 0 ;
       vector <int> vis(v, 0);
       for(int i=0; i<v; i++){
        if(!vis[i]){
            cnt++ ;
            dfs(adjlist , vis , i) ;
        }
       }
       return cnt ;
    }
};