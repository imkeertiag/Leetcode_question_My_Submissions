class Solution { // TC: O(n) SC: O(n) 
public:bool forallcomponents(int start , int v , vector<vector<int>>& adj , int color[]){
    queue<int> q ;
    q.push(start) ;
    color[start] = 0 ;
    while(!q.empty()){
        int node = q.front() ;
        q.pop() ;
        for(auto it: adj[node]){ 
            //if the adj node is not coloured , you will get the opposite color of the node
            if(color[it] == -1){
                color[it] = !color[node] ;
                q.push(it) ;
            }
            //is the adj node have same color , coloured before since the path is same
            else if(color[it] == color[node]){
                return false ;
            }
        }
    }
    return true ;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size() ;
      int color[V] ;
      // to check when different components 
      for(int i=0; i<V; i++)color[i] = -1 ;
        for(int i=0; i<V; i++){
            if(color[i] == -1){
                if(forallcomponents(i , V , graph , color) == false) {
                    return false ;
                }
            }
        }
       return true ;
    }
};