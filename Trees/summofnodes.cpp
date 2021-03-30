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

int sum(node* root){
     
    if(root == NULL){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
    
}


int main() {
	node* root = buildtree();
	cout<<sum(root);
	return 0;
}
