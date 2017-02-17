/*
* @Author: chenlin
* @Date:   2017-02-17 10:16:57
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 10:17:30
* @leetcode address: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len < 2)
            return 0;
        int Profit = 0;
        int buy = 0;
        int sell = 0;
        
        if (prices[0]<=prices[1]){
            buy = prices[0];
        }
        for (int i = 1;i<len-1;i++){
             //if(prices[i]==prices[i-1])
               // continue;
             if(prices[i]>prices[i+1] && prices[i]>=prices[i-1]){
                 sell = prices[i];
                 Profit += sell - buy;
             }else if(prices[i]<=prices[i+1]&&prices[i]<prices[i-1]){
                 buy = prices[i];
             }
        }
        if (prices[len-1]>=prices[len-2]){
            sell = prices[len-1];
            Profit += sell - buy;
        }
        return Profit;
    }
};
