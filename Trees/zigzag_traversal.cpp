#include <bits/stdc++.h>
using namespace std;

class node{
    public:
  int data;
  node* left;
  node* right;
  
  node(int d){
      data = d;
      left = NULL;
      right = NULL; 
  }
    
};

node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
    
}
void levelorder(node* root){
   if(root==NULL){
       return;
   }
stack<node*> s1;
stack<node*> s2;

s1.push(root);

while(!s1.empty() || !s2.empty()){
    
    while(!s1.empty()){
    node* temp = s1.top();
    cout<<temp->data;
    s1.pop();
    
    if(temp->left){
        s2.push(temp->left);
    }
    if(temp->right){
        s2.push(temp->right);
    }
  
    }
    while(!s2.empty()){
    node* temp1 = s2.top();
    cout<<temp1->data;
    s2.pop();
    
     if(temp1->right){
        s1.push(temp1->right);
     }
    if(temp1->left){
        s1.push(temp1->left);
    }
    }
    }
  return;
}

int main(){
 node* root = buildtree();
     levelorder(root);
}
