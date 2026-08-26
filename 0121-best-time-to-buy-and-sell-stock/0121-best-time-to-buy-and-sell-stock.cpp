class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestbuy = prices[0];
        for(int i =1;i<prices.size();i++){
            // current selling day
            if(prices[i]>bestbuy){
                maxProfit=max(maxProfit ,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);    // currnet canditate checking for future 
        }
        return maxProfit;
    }
};