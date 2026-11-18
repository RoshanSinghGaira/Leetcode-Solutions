
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int cols = image[0].size();

        for(int i = 0; i < rows; i++) {
            int left = 0;
            int right = cols - 1;

            while(left <= right) {
                int temp = image[i][left];

                image[i][left] = 1 - image[i][right];
                image[i][right] = 1 - temp;

                left++;
                right--;
            }
        }

        return image;
    }
};
