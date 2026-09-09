class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int l = 0;
        int r = 1;
        int res = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                res = max(res,prices[r]-prices[l]);
            }
            else{
                l = r;
            }
            r++;
        }
        return res;
        
    }
};
