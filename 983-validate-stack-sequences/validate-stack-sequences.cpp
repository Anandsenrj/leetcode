class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int m = pushed.size();
        int i = 0,j=0;

        while(i<m  && j <m){
                st.push(pushed[i]);
            while (!st.empty() && j<m && st.top() == popped[j]) {
                st.pop();
                j++;
            }
                i++;
        }

        return st.empty();
    }
};
// class Solution {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//         stack<int> st;
//         int j = 0;

//         for (int num : pushed) {
//             st.push(num);

//             while (!st.empty() && st.top() == popped[j]) {
//                 st.pop();
//                 j++;
//             }
//         }

//         return st.empty();
//     }
// };