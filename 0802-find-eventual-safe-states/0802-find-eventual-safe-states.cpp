class Solution {
public:bool dfs( vector<int> &visit ,  vector<int> &path , int node , vector<vector<int>>& graph , vector<int> &check){
    visit[node] = 1 ;
    path[node] = 1 ;
    check[node] = 0 ;
    for(auto itr: graph[node]){
        if(!visit[itr]){
            if(dfs(visit , path , itr , graph , check) == true){
            check[node] = 0 ;
            return true ;
            }
        }
        else if(path[itr]){
            check[node] = 0 ;
            return true ;
        }
    }
        check[node] = 1 ;
        path[node] = 0 ;
        return false ;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size() ;
        vector<int> visit(v , 0) ;
        vector<int> path(v , 0) ;
        vector<int> check(v , 0) ;
        vector<int> safenode ;
        for(int i=0; i<v; i++){
            if( !visit[i] ){
            dfs(visit , path , i , graph , check);
            }
        }
        for(int i=0; i<v; i++){
            if(check[i] == 1)safenode.push_back(i) ;
        }
        return safenode ;
    }
};