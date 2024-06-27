class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int one = edges[0][0] , cntone = 0 ;
        int two = edges[0][1] , cnttwo = 0 ;
        for(int i=1; i<edges.size(); i++){
            if(edges[i][0] == one || edges[i][1] == one)cntone++ ;
            else if(edges[i][0] == two || edges[i][1] == two)cnttwo++ ;
        }
        if(cntone > cnttwo)return one ;
        else return two ;
    }
};