class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;

        for(int x: nums2){
            mp[x]=-1;
        }

    for(int x:nums2){
        while(!st.empty() && x>st.top()){
            mp[st.top()]=x;
            st.pop();
        }
        st.push(x);
    }
        vector<int> result;

        for(int x:nums1){
            result.push_back(mp[x]);
        }
        return result;
    }
    };