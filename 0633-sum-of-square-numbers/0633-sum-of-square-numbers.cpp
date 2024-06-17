class Solution {
public:
    bool judgeSquareSum(int c) {
        int s = 0, e = sqrt(c);
        while(s <= e) {
            long long p = (long long)s * s + e * e;
            if(p == c) return true;
            p < c ? s++ : e--;
        }
        return false;
    }
};