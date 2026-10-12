class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        sort(str.begin(), str.end());
        string first=str[0];
        string last=str[str.size()-1];

        int i=0;

        while(i<first.length() && i<last.length() && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};