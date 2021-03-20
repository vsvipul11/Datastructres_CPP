#include<bits/stdc++.h>
using namespace std;


stack<char> s1;

string ns;

char insertatbottom(int x){
    
    if(s1.size()==0){
        s1.push(x);
    }
    else{
        char a = s1.top();
        s1.pop();
        insertatbottom(x);
        
        
        
        
        s1.push(a);
    }
}    
  char reverse(){
      if(s1.size()>0){
          
          char x = s1.top();
          s1.pop();
          reverse();
          
          
          
          
          insertatbottom(x);
          
      }
      
  }  
    
int main(){
    s1.push('1');
    s1.push('2');
    s1.push('3');
    s1.push('4');
    
    reverse();
    
    while(!s1.empty()){
        char b = s1.top();
        s1.pop();
        ns = ns + b;
    }
    
    for(int i = ns.length()-1 ; i >= 0 ; i--){
        cout<<ns[i]<<" ";
    }
   
 return 0;
}
