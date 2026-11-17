
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        int k = s1.length();

        for (int i = 0; i < k; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if (equal(freq1, freq1 + 26, freq2)) {
            return true;
        }

        for (int right = k; right < s2.length(); right++) {

            freq2[s2[right] - 'a']++;

          
            freq2[s2[right - k] - 'a']--;

            if (equal(freq1, freq1 + 26, freq2)) {
                return true;
            }
        }

        return false;
    }
};
