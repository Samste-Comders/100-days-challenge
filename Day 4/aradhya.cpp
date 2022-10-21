class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(auto &x:s){
            mp[x]++;
        }
    int ans=0;
        int odd = 0;
        int maxi=0;
        bool oddExists = false;
        for(auto &x:mp){
            if(x.second%2==0){
                ans+=x.second;
            }
            else{
                oddExists = true;
                ans += x.second-1;
            }
        }
        if(oddExists) ans++;
        return ans;
    }
};
