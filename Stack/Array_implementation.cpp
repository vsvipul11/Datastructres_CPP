#include <iostream>
using namespace std;

#define max 1000
class stack {
    int top = -1;
    
    public:
    int a[max];

stack(){
    int top = -1;
}
    bool push(int x);
    int pop();
    int peak();
    bool isempty();

};
bool stack::push(int x){
    if(top >= (max-1)){
        cout<<"stack overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<< " pushed into stack "<<endl;
        return true;
    }
}
int stack::peak(){
    if(top<0){
        cout<<"stack is empty";
        
    }else{
        return a[top];
    }
}
int stack::pop(){
    
}

int main() {
    class stack s;
    s.push(2);
	s.push(8);
	cout<<s.peak();
	return 0;
}
