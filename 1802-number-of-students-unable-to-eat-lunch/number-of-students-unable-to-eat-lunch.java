class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
         int n=students.length;
        int count_1=0;
        int count_0=0;
        for(int i=0;i<n;i++){
            if(students[i]==1){
                count_1++;
            }                
            else{
                count_0++;
            }
        }
        
        for(int j=0;j<n;j++){
            if(sandwiches[j]==1){
                if(count_1==0){
                    return count_0;
                }
                count_1--;
            }
            else{
                if(count_0==0){
                    return count_1;
                }
                count_0--;
            }
                
            
        }
        //      for (int sandwich : sandwiches) {
        //     if (sandwich == 0) {
        //         if (count_0 == 0)
        //             return count_1;
        //         count_0--;
        //     } else {
        //         if (count_1 == 0)
        //             return count_0;
        //         count_1--;
        //     }
        // }

        
        return 0;
        }
    }
