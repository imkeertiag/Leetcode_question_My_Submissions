class Solution {
public:
// try to turn last two digits as 00 , 25 , 50, 75
    int minimumOperations(string num) {
        bool fivefound = false;
        bool zerofound = false;
        for (int i =num.size()-1; i >=0;i--) {
            
            if (zerofound && num[i]=='0') return num.size()-2-i; //00
            if (zerofound && num[i]=='5') return num.size()-2-i; //05
            if (fivefound && num[i]=='2') return num.size()-2-i; //52
            if (fivefound && num[i]=='7') return num.size()-2-i; //57
            if (num[i]=='5') fivefound = true;
            if (num[i]=='0') zerofound = true;
            
        }
        if (zerofound) return num.size()-1; 
        return num.size();
    }
};