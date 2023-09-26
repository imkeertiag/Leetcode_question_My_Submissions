class Solution {
public:bool checkeven(int num){
    string s = to_string(num) ;
    int n = s.size() ;
    if(s.size() % 2 == 0)return true ;
    return false ;
}
    int findNumbers(vector<int>& nums) {
        int cnt = 0 ;
        for(int i=0; i<nums.size(); i++){
            if(checkeven(nums[i]) == true){
                cnt++ ;
                cout<<nums[i]<<cnt<<" " ;
            }
        }
        return cnt ;
    }
};