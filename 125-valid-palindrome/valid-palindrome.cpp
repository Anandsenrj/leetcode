// class Solution {
// public:
//     bool isPalindrome(string s) {
//         for(int i=0;i<s.size()/2;i++){
//         if(i>=s.size()/2) return true;
//         if(s[i]!=s[s.size()-i-1]) return false;}
//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            }
            else if (!isalnum(s[right])) {
                right--;
            }
            else {
                if (tolower(s[left]) != tolower(s[right]))
                    return false;

                left++;
                right--;
            }
        }

        return true;
    }
};