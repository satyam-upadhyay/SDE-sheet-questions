class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX; int best=0;   
        for(int i=0;i<prices.size();i++){
            minp=min(minp,prices[i]);
            best=max(best,prices[i]-minp);
        }
        return best;
    }
};