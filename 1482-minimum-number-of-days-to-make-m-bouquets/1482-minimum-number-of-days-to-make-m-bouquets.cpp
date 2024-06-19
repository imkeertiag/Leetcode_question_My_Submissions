class Solution {
public: int canmake(vector<int>& bloom, int mid, int k){
    int bouque = 0 , conscnt = 0 ;
    for(int i=0; i<bloom.size(); i++){
        if(bloom[i] <= mid)conscnt +=1 ;
        else conscnt = 0 ;
        if(conscnt == k){
            bouque ++ ;
            conscnt = 0 ;
        }
    }
    return bouque ;
}
    int minDays(vector<int>& bloom, int m, int k) {
        if((long long) m*k > bloom.size())return -1 ;
        int s = 0 , e = *max_element(bloom.begin() , bloom.end()) ;
        int minid = 0 ;
        while(s<=e){
            int mid = s + (e-s)/2 ;
            if(canmake(bloom , mid , k) >= m){
                minid = mid ;
                e = mid-1 ;
            }
            else{
                s = mid+1 ;
            }
        }
        return minid ;
    }
};