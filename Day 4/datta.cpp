//Datta's 1st solution 
class Solution {
public:
    int longestPalindrome(string s) {
        int freq[60] = {0};
        for(int i = 0; i < s.size(); ++i){
            freq[s[i] - 65]++;
        }
        int ans = 0,odd = 0;
        int flag = 0;
        sort(freq, freq + 60,greater<int>());
        for(int i = 0; i < 60; ++i){
            cout<<freq[i]<<" ";
            if(freq[i] % 2 == 0)
                ans+=freq[i];
            if(freq[i] % 2 == 1){
                ans+=(freq[i] - 1);
                flag=1;
            }
        }
        return ans+flag;
    }
};
