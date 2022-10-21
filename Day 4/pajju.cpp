//question 1 solution

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for(auto &i : s) m[i]++;
        int cnt = 0;
        bool flag = false;
        for(auto &i : m){
            if(i.second%2 == 0) cnt += i.second;
            else{
                flag = true;
                cnt += i.second - 1;
            }
        }
        return cnt + flag;
    }
};

//question 2 solution

class Solution {
public:
    int strStr(string haystack, string needle) {
        int diff = haystack.size() - needle.size();
        int n = needle.size();
        for(int i = 0 ; i <= diff; ++i){
            if(needle == haystack.substr(i,n)) return i;
        }
         return -1;
    }
};

//question 3 solution

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
