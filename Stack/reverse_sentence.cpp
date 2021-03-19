#include<bits/stdc++.h>
using namespace std;

void reversesentence(string s){
    
    stack<string> s1;
    
    for(int i = 0 ; i<s.length() ; i++){
        string word="";
    while(s[i]!=' ' &&i<s.length()){
        
        word = word + s[i];

        i++;
        
    }
    s1.push(word);
    }
    
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
}


int main(){
    string s;
    getline(cin,s);
    
    reversesentence(s);
    
 return 0;
}
