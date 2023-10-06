class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3)return n-1 ;
        int q=0 , r=0 ;
        int ans = 0 ;
        q = n/3 ;
        r = n%3 ;
        if(r == 0)ans = pow(3 , q);
        else if(r == 1)ans = (pow(3 , q-1))*4 ;
        else if(r == 2)ans = (pow(3 , q))*2 ;
        return ans ;
    }
};