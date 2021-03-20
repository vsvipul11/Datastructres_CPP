#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int x;
    int y;
    stack<int> s1;
    stack<int>s2;
  
    cin>>n;
   
    
    while(n--){
         cin>>x;
        if(x==1){
            cin>>y;
            s1.push(y);
            if(s2.empty() || y>=s2.top()){
                s2.push(y);
            }
        }
        
        else if(x==2){
            if(s1.top()==s2.top())
            {
                s1.pop();
                s2.pop();
            }
            else{
                s1.pop();
            }
        }
        
        else if(x==3){
            cout<<s2.top()<<endl;
        }
        
    }
    
 return 0;
}
