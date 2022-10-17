//Question 1 solution
class Solution {
public:
    bool checkIfPangram(string sentence) {
        //pushing into set will eliminate all duplicates and will keep unique values only
        unordered_set<char>s(sentence.begin(),sentence.end());
        //then check if all 26 alphabets occur once or not .
        if(s.size()==26) return true;
        return false;
    }
};

//Question 2 solution

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n=digits.size();
        digits[n-1]+=1;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]+carry>9)
            {
                digits[i]=0;
                carry=1;
            }
            else
            {
                digits[i]+=carry;
                carry=0;
            }
        }
        if(carry!=0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
