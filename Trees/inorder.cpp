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

void printin(node* root){
    if(root == NULL){
        return;
    }
  
    printin(root->left);
      cout<<root->data<<" ";
    printin(root->right);
    
}
int main() {
     node* root = buildtree();
     printin(root);
	return 0;
}
