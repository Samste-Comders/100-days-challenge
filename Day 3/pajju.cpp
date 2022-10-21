//solution for prblm 1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode head(0), *ans = &head;
            int carry = 0;
            while(l1 != NULL && l2 != NULL)
            {
                ans->next = new ListNode((l1->val + l2->val + carry)%10);
                carry = (l1->val + l2->val+carry)/10;
                ans = ans->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            while(l1 != NULL)
            {
                ans->next = new ListNode((l1->val + carry)%10);
                carry = (l1->val+carry)/10;
                l1 = l1->next;
                ans = ans->next;    
            }
            while(l2 != NULL)
            {
                ans->next = new ListNode((l2->val + carry)%10);
                carry = (l2->val+carry)/10;
                l2 = l2->next;
                ans = ans->next;    
            }
            if(carry)
            {
                ans->next = new ListNode(carry);
            }
        return head.next;
    }
};

//solution for problem 2

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        int container = 0;
        while(i<j)
        {
            ans = min(height[i],height[j])*(j-i);
            cout<<ans<<" ";
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            container = max(container,ans);
        }
        return container;
    }
};
