#include <bits/stdc++.h>
using namespace std;



int main(){
  int n;
  cin>>n;
  int t1 = 0;
  int t2 = 1;
  int next;
  
  for(int  i = 0 ; i <  n ; i++){
      
      if(i == 0){
          cout<<t1<<" ";
      }else if(i == 1){
          cout<<t2<<" ";
          
      }
       next = t1+t2;
      t1= t2;
      t2=next;
      
       cout<<next<<" ";
            
         

    
  }
}


