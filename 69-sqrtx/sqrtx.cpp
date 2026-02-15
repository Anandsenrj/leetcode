class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int low = 1, high = x;
        int ans = 0;

        while (low <= high) {
            long mid = low + (high - low) / 2;

            if (mid <= x / mid) {   // mid*mid <= x (avoid overflow)
                ans = mid;          // store possible answer
                low = mid + 1;      // try bigger value
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

