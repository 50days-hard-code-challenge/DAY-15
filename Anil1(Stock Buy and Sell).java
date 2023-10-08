public class Solution {
    public static int bestTimeToBuyAndSellStock(int []prices) {
        // Write your code here.
       int n = prices.length;
       // assume the first day minimum prices 
       int min = prices[0];
       int maxprofit = 0;
       for(int i = 1; i<n; i++){
           if(min>prices[i]){
               // update the minimum element 
               min = prices[i];
           }
           // cost tells profit or loss 
           int cost = prices[i] - min;
           // update the maximum profit
           maxprofit = Math.max(maxprofit,cost);
       }
       return maxprofit;
    }
}
