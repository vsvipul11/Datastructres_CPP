class Solution {
public:
     ListNode *k=NULL,*ptr=NULL;
    void push(int x){
        ListNode *temp=new  ListNode();
        if(!k){
             temp->val=x;
        temp->next=NULL;
            ptr=temp;
            k=ptr;
            }
        else{
        temp->val=x;
        temp->next=NULL;
        k->next=temp;
        k=temp;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2 != NULL)return l2;
        if(l2==NULL && l1 != NULL || !l1 && !l2)return l1;   
      while(l1!=NULL && l2!=NULL){
        if(l1->val<=l2->val){
            push(l1->val);
            l1=l1->next;
        }
          else{
              push(l2->val);
              l2=l2->next;
          }   
      }
        if(l1==NULL && l2 != NULL)k->next=l2;
        else if(l2==NULL && l1 != NULL)k->next=l1;
        return ptr;
    }
};
