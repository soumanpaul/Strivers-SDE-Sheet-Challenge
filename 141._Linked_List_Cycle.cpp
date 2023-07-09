class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return head;
        ListNode * slow = head;
        ListNode* fast = head->next;
        while(slow != fast){
            if(slow == NULL || fast== NULL || fast->next == NULL) return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
};