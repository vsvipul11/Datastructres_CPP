class Solution {
public:
    bool ispal(ListNode* head, ListNode** temp)
    {
        bool palin;
        if(head == NULL)
        {
            return true;
        }
        palin = ispal(head->next, temp);
        if(palin == false)
        {
            return false;
        }
        palin = head->val == (*temp)->val;
        *temp = (*temp)->next;
        return palin;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        if(ispal(head, &temp))
        {
            return true;
        }
        return false;
    }
};
