// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         stack<int> st;
//         int n = heights.size();
//         int maxArea = 0;

//         for (int i = 0; i <= n; i++) {
//             int currHeight = (i == n) ? 0 : heights[i];

//             while (!st.empty() && currHeight < heights[st.top()]) {
//                 int h = heights[st.top()];
//                 st.pop();

//                 int width;
//                 if (st.empty())
//                     width = i;
//                 else
//                     width = i - st.top() - 1;

//                 maxArea = max(maxArea, h * width);
//             }
//             st.push(i);
//         }
//         return maxArea;
//     }
// };


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n == 0) return 0; // Base Condition
        int maxArea = 0;
        vector<int> left(n); //fill left boundary
        vector<int> right(n); // fill right boundary
        
        left[0] = -1;
        right[n - 1] = n;
        
        for(int i = 1; i < n; i++){
            int prev = i - 1; // previous for comparing the heights
            while(prev >= 0 && heights[prev] >= heights[i]){
                prev = left[prev]; // we have done this to minimise the jumps we make to the left
            }
            left[i] = prev;
        }
        // Similarly we do for right
        for(int i = n - 2; i >= 0; i--){
            int prev = i + 1; 
            while(prev < n && heights[prev] >= heights[i]){
                prev = right[prev]; 
            }
            right[i] = prev;
        }
        // once we have these two arrays fill we need width & area
        for(int i = 0; i < n; i++){
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i] * width);
        }
        return maxArea;
    }
};