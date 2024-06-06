class Solution {
public:// to do
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;

        sort(hand.begin(), hand.end());
        unordered_map<int, int> freq;
        //count frequency of each number
        for (auto i : hand) freq[i]++;

        for (int i = 0; i < n; i++) {
            //we've already used this number
            if (freq[hand[i]] == 0) continue;

            int num = hand[i];
            for (int j = 0; j < groupSize; j++) {
                if (freq[num+j] == 0) return false;
                freq[num+j]--;
            }
        }

        return true;
    }
};