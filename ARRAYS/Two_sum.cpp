#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector <int> sol(vector<int> &v , int target){
    
    unordered_set<int> s;
    vector<int> ans;
    
    for(int  i = 0 ; i < v.size() ; i++){
        
        int x = target - v[i]; 
        
        if(s.find(x) != s.end() ){
            ans.push_back(x);
            ans.push_back(v[i]);
               return ans;
        }
        
        s.insert(v[i]);
    }
    
 
}

int main(){
    vector<int> a{1, 4 ,2 ,5 ,3 ,9 ,8};
    
    int target = 6;
    
    auto p = sol(a , target);
    
   for(int  i = 0 ; i < p.size() ; i++){
       cout<<p[i]<<" ";
   }
    return 0;
}
