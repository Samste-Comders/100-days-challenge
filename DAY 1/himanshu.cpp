class Solution {
public:
    bool isValid(string st) {
        stack<char>s;
        s.push('0');
        for(int i=0;i<st.size();i++)
        {
            if(st[i]==')')
            {
                if(s.top()!='(')  return false;
                else
                    s.pop();
            }
            else if(st[i]==']')
            {
                if(s.top()!='[')  return false;
                else  s.pop();
            }
            else if(st[i]=='}')
            {
                if(s.top()!='{')  return false;
                else s.pop();
            }
            else
            {
                s.push(st[i]);
            }
        }
        if(s.top()=='0')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
