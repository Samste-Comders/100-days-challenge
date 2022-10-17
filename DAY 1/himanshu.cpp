//Question 1 solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                return {i,m[target-nums[i]]};
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return {};
    }
};


//Question 2 solution

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head,*slow=head;
        while(n--) fast=fast->next;
        if(fast==NULL)
        {
            return head->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};


//Question 3 solution
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
