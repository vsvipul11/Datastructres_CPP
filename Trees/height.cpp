#include<bits/stdc++.h>
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
   
    node* build(){
        int d;
        cin>>d;
        if(d==-1){
            return NULL;
        }
        node* root = new node(d);
         root->left = build();
         root->right = build();
         
         return root;
        } 
   
   
   int height(node* root){
       if(root==NULL){
           return 0;
       }
       int ls = height(root->left);
       int rs = height(root->right);
       
       return max(ls,rs)+1;
   }
   
   
    int main(){
        node* root = build();
          cout<<height(root);
        
    return 0;
}
