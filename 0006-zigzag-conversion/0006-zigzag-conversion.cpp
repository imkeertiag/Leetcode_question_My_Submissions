class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
            return s;
        }

        string ans;
        ans.reserve(s.size());
        int n = s.size();
        int l = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += l) {
                ans += s[j + i];
                if (i != 0 && i != numRows - 1 && j + l - i < n)
                    ans += s[j + l - i];
            }
        }
        return ans;
    }
};