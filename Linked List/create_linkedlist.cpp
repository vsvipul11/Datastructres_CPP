#include <iostream>
using namespace std;

class node{
  public:
      int data;
      node* next;
  
    node(int d){
        data = d;
        next = NULL;
    }

};

void insert(node* &head , int d){
    

node* n = new node(d);    
   
   if(head == NULL){
       head = n;
       return;
   } 
    
    node* temp = head;
    
    while(temp->next){
        temp = temp->next;
        
    }
    temp->next = n;
    
}

void print(node* head){
    
    node* temp = head;
    
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
	
    }
    cout<<"NULL";
}


int main() {
node* head = NULL;

int n,d;
cin>>n;

for(int  i = 0 ; i< n ; i++){
    cin>>d;
    insert(head  , d);
}
print(head);
	return 0;
}

