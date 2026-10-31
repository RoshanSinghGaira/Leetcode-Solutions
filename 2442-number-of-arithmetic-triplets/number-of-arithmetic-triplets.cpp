class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
     unordered_set<int> st;
     for(int x:nums){
        st.insert(x);
     }   

     int count=0;

     for(int x:nums){
        if(st.count(x-diff)&&st.count(x+diff)){
            count++;
        }
     }
     return count++;
    }
};