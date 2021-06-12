node* kreverse(node* head, int k){
    
    if(head == NULL){
        return NULL;
    }
    
    node* prev = NULL;
    node* curr = head;
    node* temp;
    int count = 1;
    
    while(curr!=NULL and count <=k ){
        temp = curr->next;
        
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }
    if(temp !=NULL){
        head->next = kreverse(temp , k);
    }
    
    return prev;
    
}
