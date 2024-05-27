class Solution {
public:bool dfs(vector<vector<int>>& graph , vector<int> &color , int node , int col ){
    color[node] = col ;
    for(auto itr: graph[node]){
       if(color[itr] == -1){
        if(dfs(graph , color , itr , !col) == false)return false ;
       }
       else if(color[itr] == color[node])return false ;
    }
    return true ;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size() ;
        vector<int> color(v , -1) ;
        for(int i=0; i<v; i++){
            if(color[i] == -1){
                if(dfs(graph , color , i , 0) == false)return false ;
            }
        }
        return true ;
    }
};