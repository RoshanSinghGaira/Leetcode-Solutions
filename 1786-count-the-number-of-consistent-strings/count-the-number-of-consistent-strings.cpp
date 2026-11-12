class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool present[26]={false};

        for(char ch:allowed){
            present[ch-'a']=true;
        }

        int count=0;

        for(int i=0;i<words.size();i++){
            bool flag=true;

            for(int  j=0;j<words[i].length();j++){
                if(!present[words[i][j]-'a']){
                    flag=false;
                    break;
                }
                }
                if(flag){
                    count++;
                }
            }
        
        return count++;
    }
};