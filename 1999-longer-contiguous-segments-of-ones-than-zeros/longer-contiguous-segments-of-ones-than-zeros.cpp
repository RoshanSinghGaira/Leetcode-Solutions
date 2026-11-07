
class Solution {
public:
    bool checkZeroOnes(string s) {
        int oneCount = 0;
        int zeroCount = 0;
        int maxOne = 0;
        int maxZero = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                oneCount++;
                zeroCount = 0;
            } else {
                zeroCount++;
                oneCount = 0;
            }

            maxOne = max(maxOne, oneCount);
            maxZero = max(maxZero, zeroCount);
        }

        return maxOne > maxZero;
    }
};
