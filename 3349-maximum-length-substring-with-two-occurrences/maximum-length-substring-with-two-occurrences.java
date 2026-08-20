class Solution {
    public int maximumLengthSubstring(String s) {
        int left = 0,len=0;
        
        int[] freq =new int [26];
        for(int right=0;right<s.length();right++){
            int idxR =s.charAt(right)-'a';
            freq[idxR]++;

            while(freq[idxR]>2){
                int idxL = s.charAt(left)-'a';

                freq[idxL]--;

                left++;
            }
            len = Math.max(len,right-left+1);
        } 
        return len;
        }   
       
        }
