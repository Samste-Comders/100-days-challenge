//TWO SUM SOLUTION
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool flag=false;
        for(int i=0;i<nums.size()-1; ++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[j]==target-nums[i]){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=true;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        return ans;
    }
};

// Remove nth node from end of LL Solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int length(ListNode *&head)
    {
        ListNode *t = head;
        int l = 0;

        while (t != NULL)
        {
            l++;
            t = t->next;
        }
        return l;
    }
    void delete1node(ListNode*& head){
        head=head->next;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* temp=head;
        int l=length(head);
        int loop=l-n-1;
        if(loop<0){
            delete1node(head);
            return head;
        }
        while(loop--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
