// Himanshu ke question ka Solution
class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int> mp;
        for(int i = 0; i < s.size(); ++i){
            mp.insert({s[i],i});
        }
        if(mp.size() < 26) return false;
        return true;
    }
};
