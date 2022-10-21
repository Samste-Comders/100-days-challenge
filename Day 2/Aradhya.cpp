// himanshu que solution

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        for(char i='a';i<='z';i++){
            if(mp[i]==0){
                return false;
            }
        }
        return true;
    }
};

//datta que solution

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        
        for(int i = digits.size() - 1; i>=0; i--){
            int sum = digits[i] + carry;
            
            digits[i] = sum%10;
            
            carry = sum/10;
            
            if(carry == 0) break;
        }
        
        if(carry == 1) digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
