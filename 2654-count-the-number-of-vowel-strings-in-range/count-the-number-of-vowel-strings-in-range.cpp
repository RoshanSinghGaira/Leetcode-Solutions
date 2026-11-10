class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;

        for (int i = left; i <= right; i++) {
            if ((words[i][0] == 'a' || words[i][0] == 'e' ||
                 words[i][0] == 'i' || words[i][0] == 'o' ||
                 words[i][0] == 'u') &&
                (words[i].back() == 'a' || words[i].back() == 'e' ||
                 words[i].back() == 'i' || words[i].back() == 'o' ||
                 words[i].back() == 'u')) {
                count++;
            }
        }

        return count;
    }
};