class Solution {
public:bool bfs(int color[] , vector<vector<int>>& graph , int idx){
     int v = graph.size() ;
     queue<int> que ;
     que.push(idx) ;
     color[idx] = 0 ;
     while(!que.empty()){
        int node = que.front() ;
        que.pop() ;
        for(auto it: graph[node]){
            if(color[it] == -1){
               color[it] = !color[node] ;
               que.push(it) ;
            }
            else{
                if(color[it]  == color[node])return false ;
            }
        }
     }
    return true ;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size() ;
        int color[v] ;
        for(int i=0; i<v; i++)color[i] = -1 ;
        // for all components 
        for(int i=0; i<v; i++){
            if(color[i] == -1){
            if(bfs(color , graph , i) == false)return false ;
            }
            
        }
        return true ;
    }
};