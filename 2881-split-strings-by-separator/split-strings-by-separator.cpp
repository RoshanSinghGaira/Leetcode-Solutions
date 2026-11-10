class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for (int j = 0; j < words.size(); j++) {
            int start = 0;

            for (int i = 0; i <= words[j].length(); i++) {
                if (i == words[j].length() || words[j][i] == separator) {
                    string temp = words[j].substr(start, i - start);

                    if (!temp.empty()) {
                        ans.push_back(temp);
                    }

                    start = i + 1;
                }
            }
        }

        return ans;
    }
};