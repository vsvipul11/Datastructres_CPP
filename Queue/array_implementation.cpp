#include<bits/stdc++.h>
using namespace std;

  int n = 20;
  
class queue1{
    
  int* a;
  int front;
  int rear;
    
    public:
    
    queue1(){
        a = new int[n];
        front = -1;
        rear = -1;
      
        
    }
    
    void enqueue(int x){
    if(rear == n-1){
        cout<<"queue overflow ";
        return;
    }
    
    a[++rear] = x;
    
    if(front ==-1){
        front++;
    }
}
   void dequeue(){
    if(front>rear || front ==-1){
        cout<<"stack underflow";
        return;
    }
    front++;
    
}
    void print(){
         
   for(int  i = front ; i <=rear ; i++ ){
       cout<<a[i]<<" ";
      }
   cout<<endl;
    }
    void peek(){
        if(front == n-1 || front  == -1){
        
          cout<<"stack underflow";
            return;
        }
        
        cout<<a[front]<<endl;
    }
    
    void empty(){
        
        if(front == n-1 || front  == -1){
        
          cout<<"stack empty";
            
        }
        else{
            cout<<"not empty";
        }
        return;
        }
};

int main(){
    queue1 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
   q.dequeue();
   q.peek();
   
    q.print();
    q.empty();
    return 0;
}
