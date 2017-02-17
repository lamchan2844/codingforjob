/*
* @Author: chenlin
* @Date:   2017-02-17 12:06:44
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 12:08:02
* @score: 15.01%
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()<2)
            return 0;
        int Profit = 0;
        int buy = prices[0];
        int sell = prices[0];
        for (int i = 1 ;i<prices.size(); i++){
            if(prices[i]<prices[i-1]&&prices[i]<=prices[i+1]&&prices[i]<buy){
                buy = prices[i];
            }
            if((prices[i]>=prices[i-1]&&prices[i]>prices[i+1])||i == prices.size()-1){
                sell = prices[i];
                if (sell - buy > Profit)
                    Profit = sell - buy;
                
            }
        }
        return Profit;
    }
};