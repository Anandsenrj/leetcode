class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        Stack<Integer> st= new Stack<>();
        int m = pushed.length;
        int i = 0,j=0;

        while(i<m  && j <m){
                st.push(pushed[i]);
            while (!st.empty() && j<m && st.peek() == popped[j]) {
                st.pop();
                j++;
            }
                i++;
        }

        return st.empty();
    }
}