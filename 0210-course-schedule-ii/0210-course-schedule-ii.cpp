class Solution {
public: // in this question we have to check whether prerequisites forming a cycle or not
    vector<int> findOrder(int num, vector<vector<int>>& prerequisites) {
        vector<int> pre[num] ;
        vector<int> topo ;
        vector<int> indegree(num , 0) ;
        for(auto prer:prerequisites){
            pre[prer[1]].push_back(prer[0]);
        }
        for(int i=0; i<num; i++){
            for(auto itr: pre[i]){
                indegree[itr]++ ;
            }
        }
        queue<int> q ;
        for(int i=0; i<num; i++){
            if(indegree[i] == 0)q.push(i) ;
        }
        while(!q.empty()){
            int node = q.front() ;
            q.pop() ;
            topo.push_back(node) ;
           for(auto itr: pre[node]){
              indegree[itr]-- ;
              if(indegree[itr] == 0){
                q.push(itr) ;
              }
           }
        }
    
        return topo.size()==num?topo:vector<int> {};
    }
};