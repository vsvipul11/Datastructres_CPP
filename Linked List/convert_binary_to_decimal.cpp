class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int result = head->val;
        
        while(head->next != NULL){
            result = result *2 + head->next->val;
            head = head->next;
        }
        return result;
    }
};
