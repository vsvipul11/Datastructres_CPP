class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*  pre = NULL;
        ListNode*  cur = head;
        ListNode*  nex;
      
        while(cur != NULL){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
            
        }
        head = pre;
        return head;
    }
};
