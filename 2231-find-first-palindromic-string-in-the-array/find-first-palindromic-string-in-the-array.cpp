class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int left=0;
            int right=words[i].length()-1;

            bool ispalindrome=true;
            while(left<right){
            if(words[i][left]!=words[i][right]){
                ispalindrome=false;
                break;
            }
            left++;
            right--;
        }
        if(ispalindrome){
            return words[i];
        }
    }
    return "";
}
};