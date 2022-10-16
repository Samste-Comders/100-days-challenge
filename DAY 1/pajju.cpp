//Question: 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>m;
        for(int i = 0;i<n;i++){
            int second = target - nums[i];
            if(m.find(second) != m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
            }
            else m[nums[i]] = i; 
        }
        return ans;
    }
};

//Question 2

class Solution {
public:
    int lengthLL(ListNode* head){
        ListNode* current = head;
        int len = 0;
        while(current != NULL){
            len++;
            current = current->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = lengthLL(head);
        if(len == 1) return NULL;
        int idx = len - n;
        ListNode *curr = head;
        ListNode *prev = NULL;
        if(idx == 0){
            head = curr->next;
            return head;
        }
        while(idx--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};
