public class Solution {
    public static int longestSubarrayWithSumK(int []a, long k) {
        // Write your code here
      int n = a.length;
      int maxlen = 0;
      for(int i = 0; i<n; i++){
          long sum = 0;
          // Traverse the array from i to j
          for(int j = i; j<n; j++){
               sum = sum + a[j];

               if(sum == k){
                   maxlen = Math.max(maxlen,j-i+1);
               }
          }
      }
      return maxlen;
    }
}
