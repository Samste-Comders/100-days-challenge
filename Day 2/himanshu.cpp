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
