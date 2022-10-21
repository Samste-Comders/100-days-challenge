// problem 1 solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = 0, mini = prices[0], profit = 0;
        for(int i = 1; i < prices.size() ; ++i){
            cost = prices[i] - mini;
            mini = min(mini,prices[i]);
            profit = max(profit,cost);
        }
        return profit;
    }
};

// problem 2 solution

class Solution {
public:
    vector<vector<int>>dp;
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> curr(2,0),prev(2,0);
        curr[0] = curr[1] = 0;
        int profit = 0;
        for(int ind = n-1; ind >= 0 ; ind--){
            for(int buy = 0 ; buy <= 1 ; buy++){
                if(buy){
                    profit = max(-prices[ind] + curr[0], curr[1]);
                }
                else{
                    profit = max(prices [ind] + curr[1],curr[0]);
                }
                prev[buy] = profit;
            }
            curr = prev;
        }
        return prev[1];
    }
};

//problem 3 solution

class Solution {
public:
    vector<vector<vector<int>>>dp;
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        dp.resize(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return memo(prices,0,1,2);
    }
    int memo(vector<int>& prices, int ind , int buy, int cap){
        if(cap == 0) return 0;
        if(ind == prices.size()) return 0;
        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
        int profit = 0;
        if(buy){
            profit = max(-prices[ind] + memo(prices,ind+1,0,cap),memo(prices,ind+1,1,cap));
            return dp[ind][buy][cap] = profit;
        }
        profit = max(prices[ind] + memo(prices,ind+1,1,cap-1),memo(prices,ind+1,0,cap));
        return dp[ind][buy][cap] = profit;
    }
};

//problem 4 solution

class Solution {
public:
    vector<vector<vector<int>>>dp;
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        dp.resize(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return memo(prices,0,1,k);
    }
    int memo(vector<int>& prices, int ind , int buy, int cap){
        if(cap == 0) return 0;
        if(ind == prices.size()) return 0;
        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
        int profit = 0;
        if(buy){
            profit = max(-prices[ind] + memo(prices,ind+1,0,cap),memo(prices,ind+1,1,cap));
            return dp[ind][buy][cap] = profit;
        }
        profit = max(prices[ind] + memo(prices,ind+1,1,cap-1),memo(prices,ind+1,0,cap));
        return dp[ind][buy][cap] = profit;
    }
};