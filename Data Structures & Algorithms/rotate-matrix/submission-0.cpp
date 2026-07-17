class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++){
            for (int j = i+1; j <n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int k = 0; k < m; k++){
            reverse(matrix[k].begin(), matrix[k].end());
        }
    }
};
