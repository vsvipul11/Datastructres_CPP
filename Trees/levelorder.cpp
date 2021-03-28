#include <iostream>
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

void printpost(node* root){
    if(root == NULL){
        return;
    }
  
    printpost(root->left);
    printpost(root->right);
      cout<<root->data<<" ";
}

int height(node* root){
    
    if(root == NULL){
        return 0;
        
    }
    
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) +1;
}

void kthorder(node* root , int k)
{
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
    }
    kthorder(root->left,k-1);
    kthorder(root->right,k-1);
    
    
}

void printall(node* root){
    int H = height(root);
    
    for(int i = 0 ; i <=H ; i++){
        kthorder(root,i);
        cout<<endl;
    }
    
    
}

int main() {
     node* root = buildtree();
    printall(root);
	return 0;
}
