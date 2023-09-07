class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int s = 0;
        int e = y.length() - 1;

        while(s <= e)
        {
            if(y[s] != y[e])
            return false;

            s++;
            e--;
        }
        return true;
    }
};