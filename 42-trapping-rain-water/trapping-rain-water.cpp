// class Solution {
// public:
// int trap(vector<int>& height) {
// int n = height.size();
// int water = 0;

// for(int j = 0; j < n; j++) {
// int leftMax = 0, rightMax = 0;

// }
// // find max on left

// for(int i = 0; i <= j; i++) {

// leftMax = max(leftMax, height[i]);
// }
// // find max on right

// for(int r = j; r < n; r++) {

// rightMax = max(rightMax, height[r]);

// }

// // water at index i

// water += min(leftMax, rightMax) - height[j];

// return water;

// }
// };

// Another approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n == 0)
            return 0;

        vector<int> prefix(n), suffix(n);

        // Prefix maximum
        prefix[0] = height[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], height[i]);
        }

        // Suffix maximum
        suffix[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], height[i]);
        }

        // Calculate trapped water
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(prefix[i], suffix[i]) - height[i];
        }

        return ans;
    }
};
                


                //Another approach

                