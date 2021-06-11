node* revere(node* head){
    
    if(head == NULL or head->next == NULL){
        return head;
    }
    
    node* shead = revere(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return shead;
    
    
}
