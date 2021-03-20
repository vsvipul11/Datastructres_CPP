include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    stack <int>s1;
    
    
    for(int i = s.length()-1 ; i>=0 ; i--){
        
        if(s[i]>='0' && s[i] <= '9'){
            s1.push(s[i]-'0');
        }
        else{
            char op1 = s1.top();
            s1.pop();
            char op2 = s1.top();
            s1.pop();
            
        switch (s[i]){
            case'+':
            s1.push(op1 + op2);
            break;
            
            case'*':
            s1.push(op1 * op2);
            break;
            
            case'-':
            s1.push(op1 - op2);
            break;
            
            case'^':
            s1.push(pow(op1,op2));
            break;
            
            
            case'/':
            s1.push(op1 / op2);
            break;
        }    
            
            
        }
        
    }
    
    
    cout<<s1.top();
    
    return 0;
}
