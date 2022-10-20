//Himanshu question's solution
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        // if(l1==)
        ListNode *newll = new ListNode(-1);
        ListNode *t1=l1;
        ListNode *t2=l2;
        ListNode *head=newll;
        int sum,carry=0;  //0
        while(t1!=NULL and t2!=NULL)
        {
            // sum=(t1->val+t2->val+carry)%10;  //7%10=7 0 8
            newll->next = new ListNode((t1->val+t2->val+carry)%10);
            carry=(t1->val+t2->val+carry)/10;
            // newll->next=sum1;
            
            t1=t1->next;
            t2=t2->next;
            newll=newll->next;
            // delete sum1;
        }
        
        while(t1!=NULL){
            // sum=%10;
            newll->next = new ListNode((t1->val+carry)%10);
            carry=(t1->val+carry)/10;
            // newll->next=t1;
            t1=t1->next;
            newll=newll->next;
        }
        
        while(t2!=NULL){
            // sum=(t2->val+carry)%10;
            newll->next = new ListNode((t2->val+carry)%10);
            carry=(t2->val+carry)/10;
            // newll->next=t2;
            t2=t2->next;
            newll=newll->next;
        }
        
        if(carry){
            newll->next = new ListNode(carry);
        }
        
        return head->next;
    }
};
