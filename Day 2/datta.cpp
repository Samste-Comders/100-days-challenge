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

//My question solution
class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n = d.size();
        for(int i = n - 1; i >= 0; --i){
            if(d[i] < 9){
                d[i]++;
                return d;
            }else
                d[i]=0;
        }
        d.push_back(0);
        d[0] = 1;
        return d;
    }
};
