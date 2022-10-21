//Solution for question 1
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto &i:s)
        {
            mp[i]++;
        }
        int re=0;
        int ans=0;
        for(auto &i:mp)
        {
            if(i.second%2==0)
            {
                ans+=i.second;
            }
            else
            {
                ans+=i.second-1;
                re=1;
            }
        }
        return ans+re;
    }
};
