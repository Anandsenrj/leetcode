class Solution {
    public int maximumLengthSubstring(String s) {
        int left = 0,right=0,len=0;
        Map<Character,Integer> mp = new HashMap<>();

        while(right<s.length()){
            char ch = s.charAt(right);

            mp.put(ch,mp.getOrDefault(ch,0)+1);

            while(mp.get(ch)>2){
                char charLeft =s.charAt(left);
                mp.put(charLeft,mp.get(charLeft)-1);
                left++;
            }
            len = Math.max(len,right-left+1);
            right++;
        }   
        return len;
        }
}