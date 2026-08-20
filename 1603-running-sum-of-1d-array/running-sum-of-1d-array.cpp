class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        /*int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            arr[i]=sum;
        }
        return arr;*/

        //shorter sol
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i]+arr[i-1];
        }
        return arr;
    }
};