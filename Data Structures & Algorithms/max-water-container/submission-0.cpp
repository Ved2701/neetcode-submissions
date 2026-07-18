class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int area = 0;
        int maxa = 0;
        while (i < j){
            area = (min(heights[i], heights[j]))*(abs(i-j));
            maxa = max(area, maxa);
            if (heights[i] < heights[j]) i++; 
            else j--;
        }
        return maxa;
    }
};
